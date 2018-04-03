#pragma once

#include <API/ARK/Ark.h>

namespace ArkApi
{
	struct Request
	{
		TSharedRef<IHttpRequest> request;
		std::function<void(TSharedRef<IHttpRequest>, bool)> callback;
	};

	class ARK_API Requests
	{
	public:
		static Requests& Get()
		{
			static Requests instance;
			return instance;
		}

		Requests(const Requests&) = delete;
		Requests(Requests&&) = delete;
		Requests& operator=(const Requests&) = delete;
		Requests& operator=(Requests&&) = delete;

		bool CreateRequest(FString& url, FString& verb,
		                   const std::function<void(TSharedRef<IHttpRequest>, bool)>& callback)
		{
			TSharedRef<IHttpRequest> request;
			FHttpModule::Get()->CreateRequest(&request);

			FString header_name = "Content-Type";
			FString header_value = "text/html";

			request->SetHeader(&header_name, &header_value);
			request->SetURL(&url);
			request->SetVerb(&verb);

			requests_.Add({request, callback});

			return request->ProcessRequest();
		}

		static void Update()
		{
			auto& requests = Get().requests_;
			for (int i = 0; i < requests.Num(); ++i)
			{
				auto request = requests[i];

				const auto status = request.request->GetStatus();
				switch (status)
				{
				case EHttpRequestStatus::Succeeded:
				case EHttpRequestStatus::Failed:
					requests.RemoveAt(i);
					request.callback(request.request, status == EHttpRequestStatus::Succeeded);
					break;
				case EHttpRequestStatus::NotStarted:
				case EHttpRequestStatus::Processing:
					break;
				default: ;
				}
			}
		}

	private:
		Requests()
		{
			GetCommands().AddOnTimerCallback("RequestsUpdate", &Update);
		}

		~Requests()
		{
			GetCommands().RemoveOnTimerCallback("RequestsUpdate");
		}

		TArray<Request> requests_;
	};
}
