#pragma once

#include <string>
#include <vector>
#include <memory>

#include "../../../json.hpp"
#include "API/ARK/Ark.h"

namespace ArkApi
{
	struct Plugin
	{
		Plugin(const HINSTANCE h_module, const std::string& name, const std::string& full_name,
		       const std::string& description, const std::string& version)
			: h_module(h_module),
			  name(name),
			  full_name(full_name),
			  description(description),
			  version(version)
		{
		}

		HINSTANCE h_module;
		std::string name;
		std::string full_name;
		std::string description;
		std::string version;
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
		 * \brief Find and load all plugins
		 */
		void LoadAllPlugins();

		/**
		 * \brief Load plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return Loaded plugin
		 */
		std::shared_ptr<Plugin>& LoadPlugin(const std::string& plugin_name);

		/**
		 * \brief Unload plugin by it's name. Plugin must free all used resources.
		 * \param plugin_name File name of the plugin
		 */
		void UnloadPlugin(const std::string& plugin_name);

		/**
		 * \brief Find plugin by it's name
		 * \param plugin_name File name of the plugin
		 * \return An iterator to the loaded plugin
		 */
		std::vector<std::shared_ptr<Plugin>>::const_iterator FindPlugin(const std::string& plugin_name);

	private:
		PluginManager();

		static nlohmann::json ReadPluginInfo(const std::string& plugin_name);

		// Callbacks
		static void LoadPluginCmd(APlayerController*, FString*, bool);
		static void UnloadPluginCmd(APlayerController*, FString*, bool);

		std::vector<std::shared_ptr<Plugin>> loaded_plugins_;
	};
}
