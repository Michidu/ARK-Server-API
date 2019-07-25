#pragma once

#include <functional>
#include <chrono>
#include <thread>

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

		/**
		 * \brief Executes function after X seconds
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param timer_name Unquie name of timer
		 * \param callback Callback function
		 * \param delay Delay in seconds
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void DelayExecute(std::string timer_name, const Func& callback, int delay, Args&&... args)
		{
			DelayExecuteInternal(timer_name, std::bind(callback, std::forward<Args>(args)...), delay);
		}

		/**
		 * \brief Executes function every X seconds
		 * \tparam Func Callback function type
		 * \tparam Args Callback arguments types
		 * \param timer_name Unquie name of timer
		 * \param callback Callback function
		 * \param execution_interval Delay between executions in seconds
		 * \param execution_counter Amount of times to execute function, -1 for unlimited
		 * \param async If true, function will be executed in the new thread
		 * \param args Callback arguments
		 */
		template <typename Func, typename... Args>
		void RecurringExecute(std::string timer_name, const Func& callback, int execution_interval,
		                      int execution_counter, bool async, Args&&... args)
		{
			RecurringExecuteInternal(timer_name, std::bind(callback, std::forward<Args>(args)...),
									 execution_interval, execution_counter, async);
		}

		/**
		 * \brief Removes a timer callback
		 * \param timer_name Unquie name of timer
		 */
		void RemoveTimer(std::string timer_name)
		{
			RemoveTimerInternal(timer_name);
		}

		/**
		 * \brief Check if a timer is running
		 * \param timer_name Unquie name of timer
		 */
		bool IsTimerRunning(std::string timer_name)
		{
			return IsTimerRunningInternal(timer_name);
		}

	private:
		struct TimerFunc
		{
			TimerFunc(std::string timer_name,
					  const std::chrono::time_point<std::chrono::system_clock>& next_time,
			          std::function<void()> callback,
			          bool exec_once, int execution_counter, int execution_interval)
				: timer_name(timer_name),
				  next_time(next_time),
				  callback(move(callback)),
				  exec_once(exec_once),
				  execution_counter(execution_counter),
				  execution_interval(execution_interval)
			{
			}

			std::string timer_name;
			std::chrono::time_point<std::chrono::system_clock> next_time;
			std::function<void()> callback;
			bool exec_once;
			int execution_counter;
			int execution_interval;
		};

		struct TimerThread
		{
			TimerThread(std::string timer_name, std::thread timer_thread)
				: timer_name(timer_name),
				timer_thread(std::move(timer_thread)),
				alive(true)
			{
			}

			std::string timer_name;
			std::thread timer_thread;
			bool alive;
		};

		Timer();
		~Timer();

		ARK_API void DelayExecuteInternal(std::string timer_name, const std::function<void()>& callback, int delay_seconds);
		ARK_API void RecurringExecuteInternal(std::string timer_name, const std::function<void()>& callback,
											  int execution_interval, int execution_counter, bool async);
		ARK_API bool IsTimerRunningInternal(std::string timer_name);
		ARK_API void RemoveTimerInternal(std::string timer_name);

		void Update();

		std::vector<std::unique_ptr<TimerFunc>> timer_funcs_;
		std::vector<std::unique_ptr<TimerThread>> timer_threads_;
	};
} // namespace API
