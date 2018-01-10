#pragma once

#include <string>
#include <utility>
#include <vector>
#include <memory>

#include <API/ARK/Ark.h>

#include "../../../json.hpp"

namespace ArkApi
{
	struct Plugin
	{
		Plugin(HINSTANCE h_module, std::string name, std::string full_name,
		       std::string description, float version, float min_api_version)
			: h_module(h_module),
			  name(std::move(name)),
			  full_name(std::move(full_name)),
			  description(std::move(description)),
			  version(version),
			  min_api_version(min_api_version)
		{
		}

		HINSTANCE h_module;
		std::string name;
		std::string full_name;
		std::string description;
		float version;
		float min_api_version;
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
		void LoadAllPlugins() noexcept;

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

	private:
		PluginManager();
		~PluginManager() = default;

		static nlohmann::json ReadPluginInfo(const std::string& plugin_name);

		// Callbacks
		static void LoadPluginCmd(APlayerController*, FString*, bool);
		static void UnloadPluginCmd(APlayerController*, FString*, bool);

		std::vector<std::shared_ptr<Plugin>> loaded_plugins_;
	};
}
