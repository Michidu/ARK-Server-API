#pragma once

#include <API/ARK/Ark.h>

namespace ArkApi
{
	struct Request
	{
		TSharedRef<IHttpRequest> request;
		std::function<void(TSharedRef<IHttpRequest>, bool)> callback;
		bool completed;
		bool remove_manually;

		bool operator==(const Request& rhs) const
		{
			return request == rhs.request;
		}
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
		                           const std::function<void(TSharedRef<IHttpRequest>, bool)>& callback,
		                           FString content = FString(), bool auto_remove = true);
		ARK_API void RemoveRequest(const TSharedRef<IHttpRequest>& request);

	private:
		ARK_API Requests();
		ARK_API ~Requests();

		ARK_API static void Update();

		std::vector<Request> requests_;
	};
}
