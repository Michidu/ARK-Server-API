#pragma once

#include <functional>
#include <utility>

#include "API/Base.h"
#include <mutex>

namespace API
{
	class Requests
	{
	public:
		ARK_API static Requests& Get();

		Requests(const Requests&) = delete;
		Requests(Requests&&) = delete;
		Requests& operator=(const Requests&) = delete;
		Requests& operator=(Requests&&) = delete;

		ARK_API bool CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		                              std::vector<std::string> headers = {});
		ARK_API bool CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		                               const std::string& post_data, std::vector<std::string> headers = {});
		ARK_API bool CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		                               const std::vector<std::string>& post_ids,
		                               const std::vector<std::string>& post_data,
		                               std::vector<std::string> headers = {});
		ARK_API bool CreateDeleteRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		                                 std::vector<std::string> headers = {});

	private:
		struct RequestData
		{
			std::function<void(bool, std::string)> callback;
			bool success;
			std::string result;
		};

		std::vector<RequestData> RequestsVec_;
		std::mutex RequestMutex_;

		Requests();
		~Requests();

		void Update();
		void WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result);
		void InvokeCallback(std::function<void(bool, std::string)> callback, bool success, std::string result);
	};
} // namespace API
