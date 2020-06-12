#include "PluginManager.h"

#include <filesystem>
#include <fstream>
#include <sstream>

#include <Logger/Logger.h>
#include <Tools.h>

#include "../Helpers.h"
#include "../IBaseApi.h"

namespace API
{
	PluginManager::PluginManager()
	{
		ArkApi::GetCommands().AddOnTimerCallback(L"PluginManager.DetectPluginChangesTimerCallback", &DetectPluginChangesTimerCallback);
	}

	PluginManager& PluginManager::Get()
	{
		static PluginManager instance;
		return instance;
	}

	nlohmann::json PluginManager::GetAllPDBConfigs()
	{
		namespace fs = std::filesystem;

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins";

		auto result = nlohmann::json({});

		for (const auto& dir_name : fs::directory_iterator(dir_path))
		{
			const auto& path = dir_name.path();
			const auto filename = path.filename().stem().generic_string();

			try
			{
				const auto plugin_pdb_config = ReadPluginPDBConfig(filename);
				MergePdbConfig(result, plugin_pdb_config);
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
			}
		}

		return result;
	}

	nlohmann::json PluginManager::ReadPluginPDBConfig(const std::string& plugin_name)
	{
		namespace fs = std::filesystem;

		auto plugin_pdb_config = nlohmann::json({});

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins/" + plugin_name;
		const std::string config_path = dir_path + "/PdbConfig.json";

		if (!fs::exists(config_path))
		{
			return plugin_pdb_config;
		}

		std::ifstream file{config_path};
		if (file.is_open())
		{
			file >> plugin_pdb_config;
			file.close();
		}

		return plugin_pdb_config;
	}

	nlohmann::json PluginManager::ReadSettingsConfig()
	{
		nlohmann::json config = nlohmann::json::object({});

		const std::string config_path = Tools::GetCurrentDir() + "/config.json";
		std::ifstream file{config_path};
		if (!file.is_open())
		{
			return config;
		}

		file >> config;
		file.close();

		return config;
	}

	void PluginManager::LoadAllPlugins()
	{
		namespace fs = std::filesystem;

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins";

		for (const auto& dir_name : fs::directory_iterator(dir_path))
		{
			const auto& path = dir_name.path();
			if (!is_directory(path))
			{
				continue;
			}

			const auto filename = path.filename().stem().generic_string();

			const std::string dir_file_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins/" +
				filename;
			const std::string full_dll_path = dir_file_path + "/" + filename + ".dll";
			const std::string new_full_dll_path = dir_file_path + "/" + filename + ".dll.ArkApi";

			try
			{
				// Loads the new .dll.ArkApi if it exists on startup as well
				if (fs::exists(new_full_dll_path))
				{
					copy_file(new_full_dll_path, full_dll_path, fs::copy_options::overwrite_existing);
					fs::remove(new_full_dll_path);
				}

				std::stringstream stream;

				std::shared_ptr<Plugin>& plugin = LoadPlugin(filename);

				stream << "Loaded plugin " << (plugin->full_name.empty() ? plugin->name : plugin->full_name) << " V" <<
					plugin->version << " (" << plugin->description << ")";

				Log::GetLog()->info(stream.str());
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
			}
		}

		CheckPluginsDependencies();

		// Set auto plugins reloading
		auto settings = ReadSettingsConfig();

		enable_plugin_reload_ = settings["settings"].value("AutomaticPluginReloading", false);
		if (enable_plugin_reload_)
		{
			reload_sleep_seconds_ = settings["settings"].value("AutomaticPluginReloadSeconds", 5);
			save_world_before_reload_ = settings["settings"].value("SaveWorldBeforePluginReload", true);
		}

		Log::GetLog()->info("Loaded all plugins\n");
	}

	std::shared_ptr<Plugin>& PluginManager::LoadPlugin(const std::string& plugin_name) noexcept(false)
	{
		namespace fs = std::filesystem;

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins/" + plugin_name;
		const std::string full_dll_path = dir_path + "/" + plugin_name + ".dll";

		if (!fs::exists(full_dll_path))
		{
			throw std::runtime_error("Plugin " + plugin_name + " does not exist");
		}

		if (IsPluginLoaded(plugin_name))
		{
			throw std::runtime_error("Plugin " + plugin_name + " was already loaded");
		}

		auto plugin_info = ReadPluginInfo(plugin_name);

		// Check version		
		const auto required_version = static_cast<float>(plugin_info["MinApiVersion"]);
		if (required_version != .0f && game_api->GetVersion() < required_version)
		{
			throw std::runtime_error("Plugin " + plugin_name + " requires newer API version!");
		}

		HINSTANCE h_module = LoadLibraryA(full_dll_path.c_str());
		if (h_module == nullptr)
		{
			throw std::runtime_error(
				"Failed to load plugin - " + plugin_name + "\nError code: " + std::to_string(GetLastError()));
		}

		// Calls Plugin_Init (if found) after loading DLL
		// Note: DllMain callbacks during LoadLibrary is load-locked so we cannot do things like WaitForMultipleObjects on threads
		using pfnPluginInit = void(__fastcall*)();
		const auto pfn_init = reinterpret_cast<pfnPluginInit>(GetProcAddress(h_module, "Plugin_Init"));
		if (pfn_init != nullptr)
		{
			pfn_init();
		}

		return loaded_plugins_.emplace_back(std::make_shared<Plugin>(h_module, plugin_name, plugin_info["FullName"],
		                                                             plugin_info["Description"], plugin_info["Version"],
		                                                             plugin_info["MinApiVersion"],
		                                                             plugin_info["Dependencies"]));
	}

	void PluginManager::UnloadPlugin(const std::string& plugin_name) noexcept(false)
	{
		namespace fs = std::filesystem;

		const auto iter = FindPlugin(plugin_name);
		if (iter == loaded_plugins_.end())
		{
			throw std::runtime_error("Plugin " + plugin_name + " is not loaded");
		}

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins/" + plugin_name;
		const std::string full_dll_path = dir_path + "/" + plugin_name + ".dll";

		if (!fs::exists(full_dll_path.c_str()))
		{
			throw std::runtime_error("Plugin " + plugin_name + " does not exist");
		}

		// Calls Plugin_Unload (if found) just before unloading DLL to let DLL gracefully clean up
		// Note: DllMain callbacks during FreeLibrary is load-locked so we cannot do things like WaitForMultipleObjects on threads
		using pfnPluginUnload = void(__fastcall*)();
		const auto pfn_unload = reinterpret_cast<pfnPluginUnload>(GetProcAddress((*iter)->h_module, "Plugin_Unload"));
		if (pfn_unload != nullptr)
		{
			pfn_unload();
		}

		const BOOL result = FreeLibrary((*iter)->h_module);
		if (result == 0)
		{
			throw std::runtime_error(
				"Failed to unload plugin - " + plugin_name + "\nError code: " + std::to_string(GetLastError()));
		}

		loaded_plugins_.erase(remove(loaded_plugins_.begin(), loaded_plugins_.end(), *iter), loaded_plugins_.end());
	}

	nlohmann::json PluginManager::ReadPluginInfo(const std::string& plugin_name)
	{
		nlohmann::json plugin_info_result({});
		nlohmann::json plugin_info({});

		const std::string dir_path = Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins/" + plugin_name;
		const std::string config_path = dir_path + "/PluginInfo.json";

		std::ifstream file{config_path};
		if (file.is_open())
		{
			file >> plugin_info;
			file.close();
		}

		try
		{
			plugin_info_result["FullName"] = plugin_info.value("FullName", "");
			plugin_info_result["Description"] = plugin_info.value("Description", "No description");
			plugin_info_result["Version"] = plugin_info.value("Version", 1.0f);
			plugin_info_result["MinApiVersion"] = plugin_info.value("MinApiVersion", .0f);
			plugin_info_result["Dependencies"] = plugin_info.value("Dependencies", std::vector<std::string>{});
		}
		catch (const std::exception& error)
		{
			Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
		}

		return plugin_info_result;
	}

	void PluginManager::CheckPluginsDependencies()
	{
		for (const auto& plugin : loaded_plugins_)
		{
			if (plugin->dependencies.empty())
			{
				continue;
			}

			for (const std::string& dependency : plugin->dependencies)
			{
				if (!IsPluginLoaded(dependency))
				{
					Log::GetLog()->error("Plugin {} is  missing! {} might not work correctly", dependency,
					                     plugin->name);
				}
			}
		}
	}

	std::vector<std::shared_ptr<Plugin>>::const_iterator PluginManager::FindPlugin(const std::string& plugin_name)
	{
		const auto iter = std::find_if(loaded_plugins_.begin(), loaded_plugins_.end(),
		                               [plugin_name](const std::shared_ptr<Plugin>& plugin) -> bool
		                               {
			                               return plugin->name == plugin_name;
		                               });

		return iter;
	}

	bool PluginManager::IsPluginLoaded(const std::string& plugin_name)
	{
		return FindPlugin(plugin_name) != loaded_plugins_.end();
	}

	void PluginManager::DetectPluginChangesTimerCallback()
	{
		auto& pluginManager = Get();

		const time_t now = time(nullptr);
		if (now < pluginManager.next_reload_check_)
		{
			return;
		}

		pluginManager.next_reload_check_ = now + pluginManager.reload_sleep_seconds_;

		pluginManager.DetectPluginChanges();
	}

	void PluginManager::DetectPluginChanges()
	{
		namespace fs = std::filesystem;

		// Prevents saving world multiple times if multiple plugins are queued to be reloaded
		bool save_world = save_world_before_reload_;

		for (const auto& dir_name : fs::directory_iterator(
			     Tools::GetCurrentDir() + "/" + game_api->GetApiName() + "/Plugins"))
		{
			const auto& path = dir_name.path();
			if (!is_directory(path))
			{
				continue;
			}

			const auto filename = path.filename().stem().generic_string();

			const std::string plugin_folder = path.generic_string() + "/";

			const std::string plugin_file_path = plugin_folder + filename + ".dll";
			const std::string new_plugin_file_path = plugin_folder + filename + ".dll.ArkApi";

			if (fs::exists(new_plugin_file_path) && FindPlugin(filename) != loaded_plugins_.end())
			{
				// Save the world in case the unload/load procedure causes crash
				if (save_world)
				{
					//Log::GetLog()->info("Saving world before reloading plugins ...");
					//ArkApi::GetApiUtils().GetShooterGameMode()->SaveWorld();
					//Log::GetLog()->info("World saved.");
					save_world = false; // do not save again if multiple plugins are reloaded in this loop
				}

				try
				{
					UnloadPlugin(filename);

					copy_file(new_plugin_file_path, plugin_file_path, fs::copy_options::overwrite_existing);
					fs::remove(new_plugin_file_path);

					LoadPlugin(filename);
				}
				catch (const std::exception& error)
				{
					Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
					continue;
				}

				Log::GetLog()->info("Reloaded plugin - {}", filename);
			}
		}
	}
} // namespace API
