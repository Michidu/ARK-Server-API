#pragma once

#include "../API/Base.h"
#include "Logger/spdlog/spdlog.h"

ARK_API std::vector<spdlog::sink_ptr>& APIENTRY GetLogSinks();

class Log
{
public:
	Log(const Log&) = delete;
	Log(Log&&) = delete;
	Log& operator=(const Log&) = delete;
	Log& operator=(Log&&) = delete;

	static Log& Get()
	{
		static Log instance;
		return instance;
	}

	static std::shared_ptr<spdlog::logger>& GetLog()
	{
		return Get().logger_;
	}

	void Init(const std::string& plugin_name)
	{
		auto& sinks = GetLogSinks();

		logger_ = std::make_shared<spdlog::logger>(plugin_name, begin(sinks), end(sinks));

		logger_->set_pattern("%D %R [%n][%l] %v");
		logger_->flush_on(spdlog::level::info);
	}

private:
	Log() = default;
	~Log() = default;

	std::shared_ptr<spdlog::logger> logger_;
};
