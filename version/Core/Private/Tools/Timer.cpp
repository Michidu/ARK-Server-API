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

	void Timer::DelayExecuteInternal(std::string timer_name, const std::function<void()>& callback, int delay_seconds)
	{
		const auto now = std::chrono::system_clock::now();
		const auto exec_time = now + std::chrono::seconds(delay_seconds);

		timer_funcs_.emplace_back(std::make_unique<TimerFunc>(timer_name, exec_time, callback, true, 1, 0));
	}

	bool Timer::IsTimerRunningInternal(std::string timer_name)
	{
		const auto& timer_funcs = std::find_if(timer_funcs_.begin(), timer_funcs_.end(), [&timer_name](const auto& data)
		{
			return timer_id == data->timer_id;
		});

		if (timer_funcs != timer_funcs_.end())
			return true;

		const auto& timer_thread = std::find_if(timer_threads_.begin(), timer_threads_.end(), [&timer_name](const auto& data)
		{
			return timer_id == data->timer_id;
		});

		return timer_thread != timer_threads_.end() && timer_thread->get()->alive;
	}

	void Timer::RecurringExecuteInternal(std::string timer_name, const std::function<void()>& callback,
										 int execution_interval, int execution_counter, bool async)
	{
		if (async)
		{
			timer_threads_.emplace_back(std::make_unique<TimerThread>(timer_name,
				std::thread([timer_name, callback, execution_interval, execution_counter, this]()
			{
				if (execution_counter == -1)
				{
					for (; Timer::Get().IsTimerRunning(timer_name);)
					{
						callback();
						std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
					}		
					
					timer_threads_.erase(std::remove_if(timer_threads_.begin(), timer_threads_.end(), [&timer_name](const auto& data)
					{
						return timer_id == data->timer_id;
					}), timer_threads_.end());
				}

				for (int i = 0; i < execution_counter; ++i)
				{
					callback();
					std::this_thread::sleep_for(std::chrono::seconds(execution_interval));
				}
			}))).get()->timer_thread.detach();
		}
		else
		{
			const auto now = std::chrono::system_clock::now();
			timer_funcs_.emplace_back(
				std::make_unique<TimerFunc>(timer_name, now, callback, false, execution_counter, execution_interval));
		}
	}

	void Timer::RemoveTimerInternal(std::string timer_name)
	{
		timer_funcs_.erase(std::remove_if(timer_funcs_.begin(), timer_funcs_.end(), [&timer_name](const auto& data)
		{
			return timer_name == data->timer_name;
		}), timer_funcs_.end());

		const auto& timer_thread = std::find_if(timer_threads_.begin(), timer_threads_.end(), [&timer_name](const auto& data)
		{
			return timer_name == data->timer_name;
		});

		if (timer_thread != timer_threads_.end())
		{
			timer_thread->get()->alive = false;
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
