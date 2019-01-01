#pragma once

#include <functional>
#include <chrono>

#include "API/Base.h"

namespace API
{
	class Timer
	{
	public:
		ARK_API static Timer& Get();

		Timer(const Timer&) = delete;
		Timer(Timer&&) = delete;
		Timer& operator=(const Timer&) = delete;
		Timer& operator=(Timer&&) = delete;

		template <typename Func, typename... Args>
		void DelayExecute(const Func& callback, int delay, Args&&... args)
		{
			DelayExecuteInternal(std::bind(callback, std::forward<Args>(args)...), delay);
		}

		template <typename Func, typename... Args>
		void RecurringExecute(const Func& callback, int execution_interval,
		                      int execution_counter, bool async, Args&&... args)
		{
			RecurringExecuteInternal(std::bind(callback, std::forward<Args>(args)...), execution_interval,
			                         execution_counter, async);
		}

	private:
		struct TimerFunc
		{
			TimerFunc(const std::chrono::time_point<std::chrono::system_clock>& next_time,
			          std::function<void()> callback,
			          bool exec_once, int execution_counter, int execution_interval)
				: next_time(next_time),
				  callback(move(callback)),
				  exec_once(exec_once),
				  execution_counter(execution_counter),
				  execution_interval(execution_interval)
			{
			}

			std::chrono::time_point<std::chrono::system_clock> next_time;
			std::function<void()> callback;
			bool exec_once;
			int execution_counter;
			int execution_interval;
		};

		Timer();
		~Timer();

		ARK_API void DelayExecuteInternal(const std::function<void()>& callback, int delay_seconds);
		ARK_API void RecurringExecuteInternal(const std::function<void()>& callback, int execution_interval,
		                                      int execution_counter, bool async);

		void Update();

		std::vector<std::unique_ptr<TimerFunc>> timer_funcs_;
	};
} // namespace API
