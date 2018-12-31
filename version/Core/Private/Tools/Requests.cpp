#include <Requests.h>

#include <curl/curl.h>

#include "../IBaseApi.h"

namespace API
{
	Requests::Requests()
		: curl_(curl_multi_init())
	{
		curl_global_init(CURL_GLOBAL_DEFAULT);

		game_api->GetCommands()->AddOnTickCallback("RequestsUpdate",
		                                           std::bind(&Requests::Update, this, std::placeholders::_1));
	}

	Requests::~Requests()
	{
		game_api->GetCommands()->RemoveOnTickCallback("RequestsUpdate");

		curl_global_cleanup();
	}

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback)
	{
		CURL* handle = curl_easy_init();
		if (!handle)
		{
			return false;
		}

		requests_[handle] = std::make_unique<Request>(callback);

		curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
		curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &Requests::WriteCallback);
		curl_easy_setopt(handle, CURLOPT_WRITEDATA, &requests_[handle]->read_buffer);

		curl_multi_add_handle(curl_, handle);

		const CURLMcode res = curl_multi_perform(curl_, &handles_count_);

		return res == CURLM_OK;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                 const std::string& post_data)
	{
		CURL* handle = curl_easy_init();
		if (!handle)
		{
			return false;
		}

		requests_[handle] = std::make_unique<Request>(callback);

		curl_easy_setopt(handle, CURLOPT_URL, url.c_str());
		curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, &Requests::WriteCallback);
		curl_easy_setopt(handle, CURLOPT_WRITEDATA, &requests_[handle]->read_buffer);
		curl_easy_setopt(handle, CURLOPT_POST, 1);
		curl_easy_setopt(handle, CURLOPT_POSTFIELDS, post_data.c_str());

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

	void Requests::Update(float)
	{
		if (handles_count_ <= 0)
			return;

		const CURLMcode res = curl_multi_perform(curl_, &handles_count_);
		if (res != CURLM_OK)
		{
			return;
		}

		int msgq;
		CURLMsg* m = curl_multi_info_read(curl_, &msgq);
		if (m && m->msg == CURLMSG_DONE)
		{
			CURL* handle = m->easy_handle;

			auto& request = requests_[handle];
			request->callback(m->data.result == CURLE_OK, move(request->read_buffer));

			requests_.erase(handle);

			--handles_count_;
			curl_multi_remove_handle(curl_, handle);
			curl_easy_cleanup(handle);
		}
	}
} // namespace API
