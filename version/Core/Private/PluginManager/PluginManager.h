#pragma once

#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <windows.h>

#include "json.hpp"

namespace API
{
	struct Plugin
	{
		Plugin(HINSTANCE h_module, std::string name, std::string full_name,
		       std::string description, float version, float min_api_version, std::vector<std::string> dependencies)
			: h_module(h_module),
			  name(std::move(name)),
			  full_name(std::move(full_name)),
			  description(std::move(description)),
			  version(version),
			  min_api_version(min_api_version),
			  dependencies(std::move(dependencies))
		{
		}

		HINSTANCE h_module;
		std::string name;
		std::string full_name;
		std::string description;
		float version;
		float min_api_version;
		std::vector<std::string> dependencies;
	};

	class PluginManager
	{
	public:
		static PluginManager& Get();

		PluginManager(const PluginManager&) = delete;
		PluginManager(PluginManager&&) = delete;
		PluginManager& operator=(const PluginManager&) = delete;
		PluginManager& operator=(PluginManager&&) = delete;

		/**
		* \brief Get all plugin pdb configs
		*/
		static nlohmann::json GetAllPDBConfigs();

		/**
		 * \brief Find and load all plugins
		 */
		void LoadAllPlugins();

		/**
		 * \brief Load plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return Loaded plugin
		 */
		std::shared_ptr<Plugin>& LoadPlugin(const std::string& plugin_name) noexcept(false);

		/**
		 * \brief Unload plugin by it's name. Plugin must free all used resources.
		 * \param plugin_name File name of the plugin
		 */
		void UnloadPlugin(const std::string& plugin_name) noexcept(false);

		/**
		 * \brief Find plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return An iterator to the loaded plugin
		 */
		std::vector<std::shared_ptr<Plugin>>::const_iterator FindPlugin(const std::string& plugin_name);

		/**
		* \brief Returns true if plugin was loaded, false otherwise
		*/
		bool IsPluginLoaded(const std::string& plugin_name);

	private:
		PluginManager();
		~PluginManager() = default;

		static nlohmann::json ReadPluginInfo(const std::string& plugin_name);
		static nlohmann::json ReadPluginPDBConfig(const std::string& plugin_name);
		static nlohmann::json ReadSettingsConfig();

		void CheckPluginsDependencies();

		static void DetectPluginChangesTimerCallback();
		void DetectPluginChanges();

		std::vector<std::shared_ptr<Plugin>> loaded_plugins_;

		// Plugins auto reloading
		bool enable_plugin_reload_{false};
		int reload_sleep_seconds_{5};
		bool save_world_before_reload_{true};
		time_t next_reload_check_{5};
	};
} // namespace API
