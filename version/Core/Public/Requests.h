#pragma once

#include <functional>
#include <utility>

#include "API/Base.h"

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
		using CURLM = void;
		using CURL = void;

		struct Request
		{
			explicit Request(std::function<void(bool, std::string)> callback)
				: callback(std::move(callback))
			{
			}

			std::function<void(bool, std::string)> callback;
			std::string read_buffer;
		};

		Requests();
		~Requests();

		static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp);
		void Update();
		std::string BuildRequest(CURL* handle, const std::vector<std::string>& post_ids,
		                         const std::vector<std::string>& post_data) const;

		CURLM* curl_;
		int handles_count_{};
		std::unordered_map<CURL*, std::unique_ptr<Request>> requests_;
	};
} // namespace API
