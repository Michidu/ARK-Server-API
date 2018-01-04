#include "Logger/Logger.h"

std::vector<spdlog::sink_ptr>& GetLogSinks()
{
	static std::vector<spdlog::sink_ptr> sinks{
		std::make_shared<spdlog::sinks::wincolor_stdout_sink_mt>() ,
		std::make_shared<spdlog::sinks::rotating_file_sink_mt>("logs/ArkApi.log", 1024 * 1024, 5)
	};

	return sinks;
}
