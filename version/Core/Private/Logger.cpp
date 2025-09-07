#include <Logger/Logger.h>

#include <fstream>

#include <Tools.h>
#include <json.hpp>

std::string GetLogName()
{
	static std::string log_name("-1");
	if (log_name == "-1")
	{
		const std::string config_path = ArkApi::Tools::GetCurrentDir() + "/config.json";
		std::ifstream file{config_path};
		if (!file.is_open())
		{
			log_name = "";
			return "";
		}

		nlohmann::json config;
		file >> config;
		file.close();

		log_name = config["settings"].value("StaticLogPath", "");
	}

	return log_name;
}

std::vector<spdlog::sink_ptr>& GetLogSinks()
{
	static std::vector<spdlog::sink_ptr> sinks{
		std::make_shared<spdlog::sinks::wincolor_stdout_sink_mt>(),
		std::make_shared<spdlog::sinks::rotating_file_sink_mt>(
			!GetLogName().empty()
				? GetLogName()
				: spdlog::sinks::default_daily_file_name_calculator::
				calc_filename(
					API::Tools::GetCurrentDir() + "/logs/ArkApi_" + std::to_string(GetCurrentProcessId()) + ".log"),
			1024 * 1024, 5)
	};

	return sinks;
}
