#include "AtlasBaseApi.h"

#include <filesystem>

#include <Tools.h>

#include "../Offsets.h"
#include "../PDBReader/PDBReader.h"
#include "../PluginManager/PluginManager.h"
#include "../Hooks.h"
#include "../Commands.h"
#include "Logger/Logger.h"
#include "HooksImpl.h"
#include "ApiUtils.h"

namespace API
{
	constexpr float api_version = 1.6f;

	AtlasBaseApi::AtlasBaseApi()
		: commands_(std::make_unique<ArkApi::Commands>()),
		  hooks_(std::make_unique<Hooks>()),
		  api_utils_(std::make_unique<AtlasApi::ApiUtils>())
	{
	}

	bool AtlasBaseApi::Init()
	{
		Log::GetLog()->info("-----------------------------------------------");
		Log::GetLog()->info("YAPI V{:.1f}", GetVersion());
		Log::GetLog()->info("Loading...\n");

		PdbReader pdb_reader;

		std::unordered_map<std::string, intptr_t> offsets_dump;
		std::unordered_map<std::string, BitField> bitfields_dump;

		nlohmann::json plugin_pdb_config;
		try
		{
			plugin_pdb_config = PluginManager::GetAllPDBConfigs();
		}
		catch (const std::exception& error)
		{
			Log::GetLog()->critical("Failed to read plugin pdb configs - {}", error.what());
			return false;
		}

		try
		{
			const std::string current_dir = Tools::GetCurrentDir();

			const std::wstring dir = Tools::Utf8Decode(current_dir);
			pdb_reader.Read(dir + L"/ShooterGameServer.pdb", plugin_pdb_config, &offsets_dump, &bitfields_dump);
		}
		catch (const std::exception& error)
		{
			Log::GetLog()->critical("Failed to read pdb - {}", error.what());
			return false;
		}

		Offsets::Get().Init(move(offsets_dump), move(bitfields_dump));

		AtlasApi::InitHooks();

		Log::GetLog()->info("API was successfully loaded");
		Log::GetLog()->info("-----------------------------------------------\n");

		return true;
	}

	float AtlasBaseApi::GetVersion()
	{
		return api_version;
	}

	std::string AtlasBaseApi::GetApiName()
	{
		return "AtlasApi";
	}

	std::unique_ptr<ArkApi::ICommands>& AtlasBaseApi::GetCommands()
	{
		return commands_;
	}

	std::unique_ptr<ArkApi::IHooks>& AtlasBaseApi::GetHooks()
	{
		return hooks_;
	}

	std::unique_ptr<ArkApi::IApiUtils>& AtlasBaseApi::GetApiUtils()
	{
		return api_utils_;
	}

	void AtlasBaseApi::RegisterCommands()
	{
		GetCommands()->AddConsoleCommand("plugins.load", &LoadPluginCmd);
		GetCommands()->AddConsoleCommand("plugins.unload", &UnloadPluginCmd);
		GetCommands()->AddRconCommand("plugins.load", &LoadPluginRcon);
		GetCommands()->AddRconCommand("plugins.unload", &UnloadPluginRcon);
	}

	FString AtlasBaseApi::LoadPlugin(FString* cmd)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				PluginManager::Get().LoadPlugin(plugin_name);
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
				return FString::Format("Failed to load plugin - {}", error.what());
			}

			Log::GetLog()->info("Loaded plugin - {}", plugin_name.c_str());

			return "Successfully loaded plugin";
		}

		return "Plugin not found";
	}

	FString AtlasBaseApi::UnloadPlugin(FString* cmd)
	{
		TArray<FString> parsed;
		cmd->ParseIntoArray(parsed, L" ", true);

		if (parsed.IsValidIndex(1))
		{
			const std::string plugin_name = parsed[1].ToString();

			try
			{
				PluginManager::Get().UnloadPlugin(plugin_name);
			}
			catch (const std::exception& error)
			{
				Log::GetLog()->warn("({}) {}", __FUNCTION__, error.what());
				return *FString::Format("Failed to unload plugin - {}", error.what());
			}

			Log::GetLog()->info("Unloaded plugin - {}", plugin_name.c_str());

			return L"Successfully unloaded plugin";
		}

		return L"Plugin not found";
	}

	// Command Callbacks
	void AtlasBaseApi::LoadPluginCmd(APlayerController* player_controller, FString* cmd, bool /*unused*/)
	{
		auto* shooter_controller = static_cast<AShooterPlayerController*>(player_controller);
		ArkApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Green, *LoadPlugin(cmd));
	}

	void AtlasBaseApi::UnloadPluginCmd(APlayerController* player_controller, FString* cmd, bool /*unused*/)
	{
		auto* shooter_controller = static_cast<AShooterPlayerController*>(player_controller);
		ArkApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Green, *UnloadPlugin(cmd));
	}

	// RCON Command Callbacks
	void AtlasBaseApi::LoadPluginRcon(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet,
	                                  UWorld* /*unused*/)
	{
		FString reply = LoadPlugin(&rcon_packet->Body);
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
	}

	void AtlasBaseApi::UnloadPluginRcon(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet,
	                                    UWorld* /*unused*/)
	{
		FString reply = UnloadPlugin(&rcon_packet->Body);
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
	}
} // namespace API
