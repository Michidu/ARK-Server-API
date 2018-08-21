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

		requests_.push_back({request, callback, false, !auto_remove});

		return request->ProcessRequest();
	}

	void Requests::RemoveRequest(const TSharedRef<IHttpRequest>& request)
	{
		requests_.erase(remove_if(requests_.begin(), requests_.end(), [&request](const Request& cur_request)
	                          {
		                          return cur_request.request == request;
	                          }), requests_.end());
	}

	void Requests::Update()
	{
		auto& requests = Get().requests_;

		requests.erase(remove_if(requests.begin(), requests.end(), [](const Request& request)
	                         {
		                         return !request.remove_manually && request.completed;
	                         }), requests.end());

		const auto size = requests.size();
		for (auto i = 0; i < size; ++i)
		{
			auto& request = requests[i];

			const auto status = request.request->GetStatus();
			switch (status)
			{
			case EHttpRequestStatus::Succeeded:
			case EHttpRequestStatus::Failed:
				if (!request.completed)
				{
					request.completed = true;

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
