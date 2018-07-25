#include <Requests.h>

namespace ArkApi
{
	Requests::Requests()
	{
		GetCommands().AddOnTimerCallback("RequestsUpdate", &Update);
	}

	Requests::~Requests()
	{
		GetCommands().RemoveOnTimerCallback("RequestsUpdate");
	}

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	bool Requests::CreateRequest(FString& url, FString& verb,
	                             const std::function<void(TSharedRef<IHttpRequest>, bool)>& callback, FString& Content)
	{
		TSharedRef<IHttpRequest> request;
		FHttpModule::Get()->CreateRequest(&request);

		FString header_name = "Content-Type";
		FString header_value = "text/html";
		FString Accepts_name = "Accepts";
		FString Accepts_value = "*/*";

		request->SetHeader(&header_name, &header_value); 
		request->SetHeader(&Accepts_name, &Accepts_value);
		request->SetURL(&url);
		request->SetVerb(&verb);
		request->SetContentAsString(&Content);
		requests_.Add({request, callback});

		return request->ProcessRequest();
	}

	void Requests::Update()
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
}
