#include <Timer.h>

#include "../IBaseApi.h"

namespace API
{
	Timer::Timer()
	{
		game_api->GetCommands()->AddOnTimerCallback("TimerUpdate", std::bind(&Timer::Update, this));
	}

	Timer::~Timer()
	{
		game_api->GetCommands()->RemoveOnTimerCallback("TimerUpdate");
	}

	Timer& Timer::Get()
	{
		static Timer instance;
		return instance;
	}

	void Timer::DelayExecuteInternal(const std::function<void()>& callback, int delay_seconds)
	{
		const auto now = std::chrono::system_clock::now();
		const auto exec_time = now + std::chrono::seconds(delay_seconds);

		timer_funcs_.emplace_back(std::make_unique<TimerFunc>(exec_time, callback, true, 1, 0));
	}

	void Timer::RecurringExecuteInternal(const std::function<void()>& callback, int execution_interval,
	                                     int execution_counter, bool async)
	{
		if (async)
		{
			std::thread([callback, execution_interval, execution_counter]()
			{
				if (execution_counter == -1)
				{
					for (;;)
					{
						callback();
						std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
					}
				}

				for (int i = 0; i < execution_counter; ++i)
				{
					callback();
					std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
				}
			}).detach();
		}
		else
		{
			const auto now = std::chrono::system_clock::now();
			timer_funcs_.emplace_back(
				std::make_unique<TimerFunc>(now, callback, false, execution_counter, execution_interval));
		}
	}

	void Timer::Update()
	{
		if (timer_funcs_.empty())
		{
			return;
		}

		const auto now = std::chrono::system_clock::now();

		bool remove = false;

		for (const auto& data : timer_funcs_)
		{
			if (data == nullptr) continue;

			if (now >= data->next_time)
			{
				if (data->exec_once)
				{
					remove = true;
				}
				else
				{
					if (data->execution_counter > 0)
					{
						--data->execution_counter;
					}
					else if (data->execution_counter != -1)
					{
						remove = true;
						continue;
					}

					data->next_time = now + std::chrono::seconds(data->execution_interval);
				}

				data->callback();
			}
		}

		if (remove)
		{
			timer_funcs_.erase(std::remove_if(timer_funcs_.begin(), timer_funcs_.end(), [&now](const auto& data)
			{
				return (now >= data->next_time && data->exec_once) ||
					(!data->exec_once && data->execution_counter == 0);
			}), timer_funcs_.end());
		}
	}
} // namespace API
