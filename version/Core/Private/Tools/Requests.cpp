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
	                             const std::function<void(TSharedRef<IHttpRequest>, bool)>& callback, FString content,
	                             bool auto_remove)
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
		request->SetContentAsString(&content);

		requests_.Add({request, callback, false, !auto_remove});

		return request->ProcessRequest();
	}

	int Requests::RemoveRequest(const TSharedRef<IHttpRequest>& request)
	{
		return requests_.RemoveAll([&request](const Request& cur_request)
		{
			return cur_request.request == request;
		});
	}

	void Requests::Update()
	{
		Get().requests_.RemoveAll([](const Request& request)
		{
			return !request.remove_manually && request.completed;
		});

		TArray<Request>& requests = Get().requests_;
		for (auto& request : requests)
		{
			const auto status = request.request->GetStatus();
			switch (status)
			{
			case EHttpRequestStatus::Succeeded:
			case EHttpRequestStatus::Failed:
				if (!request.completed)
				{
					const int idx = Get().requests_.IndexOfByKey(request);
					Get().requests_[idx].completed = true;

					request.callback(request.request, status == EHttpRequestStatus::Succeeded);
				}
				break;
			case EHttpRequestStatus::NotStarted:
			case EHttpRequestStatus::Processing:
				break;
			default: ;
			}
		}
	}
}
