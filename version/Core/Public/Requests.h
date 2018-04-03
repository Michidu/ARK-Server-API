#pragma once

#include <API/ARK/Ark.h>

namespace ArkApi
{
	struct Request
	{
		TSharedRef<IHttpRequest> request;
		std::function<void(TSharedRef<IHttpRequest>, bool)> callback;
	};

	class Requests
	{
	public:
		ARK_API static Requests& Get();

		Requests(const Requests&) = delete;
		Requests(Requests&&) = delete;
		Requests& operator=(const Requests&) = delete;
		Requests& operator=(Requests&&) = delete;

		ARK_API bool CreateRequest(FString& url, FString& verb,
		                           const std::function<void(TSharedRef<IHttpRequest>, bool)>& callback);

	private:
		ARK_API Requests();
		ARK_API ~Requests();

		ARK_API static void Update();

		TArray<Request> requests_;
	};
}
