#include <Requests.h>

#include <curl/curl.h>

#include "../IBaseApi.h"

namespace API
{
	Requests::Requests()
		: curl_(curl_multi_init())
	{
		curl_global_init(CURL_GLOBAL_DEFAULT);

		game_api->GetCommands()->AddOnTimerCallback("RequestsUpdate",
		                                            std::bind(&Requests::Update, this));
	}

	Requests::~Requests()
	{
		game_api->GetCommands()->RemoveOnTimerCallback("RequestsUpdate");

		curl_global_cleanup();
	}

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                std::vector<std::string> headers)
	{
		CURL* handle = curl_easy_init();
		if (!handle)
		{
			return false;
		}

		requests_[handle] = std::make_unique<Request>(callback);

		curl_slist* chunk = nullptr;

		for (const std::string& header : headers)
		{
			chunk = curl_slist_append(chunk, header.c_str());
		}

		curl_easy_setopt(handle, CURLOPT_HTTPHEADER, chunk);
		curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
		curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &Requests::WriteCallback);
		curl_easy_setopt(handle, CURLOPT_WRITEDATA, &requests_[handle]->read_buffer);
		curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, 0);
		curl_easy_setopt(handle, CURLOPT_TIMEOUT, 120L);

		curl_multi_add_handle(curl_, handle);

		const CURLMcode res = curl_multi_perform(curl_, &handles_count_);

		return res == CURLM_OK;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                 const std::string& post_data, std::vector<std::string> headers)
	{
		CURL* handle = curl_easy_init();
		if (!handle)
		{
			return false;
		}

		requests_[handle] = std::make_unique<Request>(callback);

		curl_slist* chunk = nullptr;

		for (const std::string& header : headers)
		{
			chunk = curl_slist_append(chunk, header.c_str());
		}

		curl_easy_setopt(handle, CURLOPT_HTTPHEADER, chunk);
		curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
		curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &Requests::WriteCallback);
		curl_easy_setopt(handle, CURLOPT_WRITEDATA, &requests_[handle]->read_buffer);
		curl_easy_setopt(handle, CURLOPT_POST, 1);
		curl_easy_setopt(handle, CURLOPT_POSTFIELDS, post_data.c_str());
		curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, 0);
		curl_easy_setopt(handle, CURLOPT_TIMEOUT, 120L);

		curl_multi_add_handle(curl_, handle);

		const CURLMcode res = curl_multi_perform(curl_, &handles_count_);

		return res == CURLM_OK;
	}

	bool Requests::CreateDeleteRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                   std::vector<std::string> headers)
	{
		CURL* handle = curl_easy_init();
		if (!handle)
		{
			return false;
		}

		requests_[handle] = std::make_unique<Request>(callback);

		curl_slist* chunk = nullptr;

		for (const std::string& header : headers)
		{
			chunk = curl_slist_append(chunk, header.c_str());
		}

		curl_easy_setopt(handle, CURLOPT_HTTPHEADER, chunk);
		curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
		curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &Requests::WriteCallback);
		curl_easy_setopt(handle, CURLOPT_WRITEDATA, &requests_[handle]->read_buffer);
		curl_easy_setopt(handle, CURLOPT_CUSTOMREQUEST, "DELETE");
		curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, 0);
		curl_easy_setopt(handle, CURLOPT_TIMEOUT, 120L);

		curl_multi_add_handle(curl_, handle);

		const CURLMcode res = curl_multi_perform(curl_, &handles_count_);

		return res == CURLM_OK;
	}

	size_t Requests::WriteCallback(void* contents, size_t size, size_t nmemb, void* userp)
	{
		if (userp == nullptr)
			return 0;

		static_cast<std::string*>(userp)->append(static_cast<char*>(contents), size * nmemb);
		return size * nmemb;
	}

	void Requests::Update()
	{
		if (handles_count_ == 0)
			return;

		curl_multi_perform(curl_, &handles_count_);

		int msgq;
		CURLMsg* m = curl_multi_info_read(curl_, &msgq);
		if (m && m->msg == CURLMSG_DONE)
		{
			CURL* handle = m->easy_handle;

			auto& request = requests_[handle];
			request->callback(m->data.result == CURLE_OK, move(request->read_buffer));

			requests_.erase(handle);

			curl_multi_remove_handle(curl_, handle);
			curl_easy_cleanup(handle);
		}
	}
} // namespace API
