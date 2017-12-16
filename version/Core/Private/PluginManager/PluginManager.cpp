#include "PluginManager.h"

#include <fstream>
#include <filesystem>

#include "../Logger/easylogging++.h"
#include "../Commands.h"
#include "Tools.h"

namespace ArkApi
{
	PluginManager::PluginManager()
	{
		Commands& commands = Commands::Get();

		commands.AddConsoleCommand("plugins.load", &LoadPluginCmd);
		commands.AddConsoleCommand("plugins.unload", &UnloadPluginCmd);
	}

	PluginManager& PluginManager::Get()
	{
		static PluginManager instance;
		return instance;
	}

	void PluginManager::LoadAllPlugins()
	{
		namespace fs = std::experimental::filesystem;

		const std::string dir_path = Tools::GetCurrentDir() + "/ArkApi/Plugins";

		for (const auto& dir_name : fs::directory_iterator(dir_path))
		{
			auto path = dir_name.path();
			auto filename = path.filename();

			try
			{
				std::shared_ptr<Plugin>& plugin = LoadPlugin(filename.generic_string());

				LOG(INFO) << "Loaded plugin - " << (plugin->full_name == "" ? plugin->name : plugin->full_name) << " V" << plugin->
					version << " (" << plugin->description << ")";
			}
			catch (const std::runtime_error& error)
			{
				LOG(WARNING) << error.what() << std::endl;
			}
		}

		LOG(INFO) << "Loaded all plugins" << std::endl;
	}

	std::shared_ptr<Plugin>& PluginManager::LoadPlugin(const std::string& plugin_name)
	{
		namespace fs = std::experimental::filesystem;

		const std::string dir_path = Tools::GetCurrentDir() + "/ArkApi/Plugins/" + plugin_name;
		const std::string full_path = dir_path + "/" + plugin_name + ".dll";

		if (!fs::exists(full_path))
			throw std::runtime_error("Plugin " + plugin_name + " does not exist");

		const auto iter = FindPlugin(plugin_name);
		if (iter != loaded_plugins_.end())
			throw std::runtime_error("Plugin " + plugin_name + " was already loaded");

		const HINSTANCE h_module = LoadLibraryExA(full_path.c_str(), nullptr, LOAD_LIBRARY_SEARCH_USER_DIRS);
		if (!h_module)
			throw std::runtime_error(
				"Failed to load plugin - " + plugin_name + "\nError code: " + std::to_string(GetLastError()));

		auto plugin_info = ReadPluginInfo(plugin_name);

		return loaded_plugins_.emplace_back(std::make_shared<Plugin>(h_module, plugin_name, plugin_info["FullName"],
		                                                             plugin_info["Description"], plugin_info["Version"]));
	}

	void PluginManager::UnloadPlugin(const std::string& plugin_name)
	{
		namespace fs = std::experimental::filesystem;

		const auto iter = FindPlugin(plugin_name);
		if (iter == loaded_plugins_.end())
			throw std::runtime_error("Plugin " + plugin_name + " is not loaded");

		const std::string dir_path = Tools::GetCurrentDir() + "/ArkApi/Plugins/" + plugin_name;
		const std::string full_path = dir_path + "/" + plugin_name + ".dll";

		if (!fs::exists(full_path))
			throw std::runtime_error("Plugin " + plugin_name + " does not exist");

		const BOOL result = FreeLibrary((*iter)->h_module);
		if (!result)
			throw std::runtime_error(
				"Failed to unload plugin - " + plugin_name + "\nError code: " + std::to_string(GetLastError()));

		loaded_plugins_.erase(remove(loaded_plugins_.begin(), loaded_plugins_.end(), *iter), loaded_plugins_.end());
	}

	nlohmann::json PluginManager::ReadPluginInfo(const std::string& plugin_name)
	{
		nlohmann::json plugin_info;

		plugin_info["FullName"] = "";
		plugin_info["Description"] = "";
		plugin_info["Version"] = "1.0";

		const std::string dir_path = Tools::GetCurrentDir() + "/ArkApi/Plugins/" + plugin_name;
		const std::string config_path = dir_path + "/PluginInfo.json";

		std::ifstream file{config_path};
		if (file.is_open())
		{
			file >> plugin_info;
			file.close();
		}

		return plugin_info;
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

	// Callbacks

	void PluginManager::LoadPluginCmd(APlayerController* player_controller, FString* cmd, bool)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				Get().LoadPlugin(plugin_name);
			}
			catch (const std::runtime_error& error)
			{
				LOG(WARNING) << error.what();
				return;
			}

			LOG(INFO) << "Loaded plugin - " << plugin_name.c_str();
		}
	}

	void PluginManager::UnloadPluginCmd(APlayerController* player_controller, FString* cmd, bool)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				Get().UnloadPlugin(plugin_name);
			}
			catch (const std::runtime_error& error)
			{
				LOG(WARNING) << error.what();
				return;
			}

			LOG(INFO) << "Unloaded plugin - " << plugin_name.c_str();
		}
	}
}
