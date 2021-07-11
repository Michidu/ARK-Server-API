#define WIN32_LEAN_AND_MEAN

#include <Requests.h>

#include "../IBaseApi.h"

#include <sstream>

#include <mutex>

#include <Poco/Net/HTTPSClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <Poco/Path.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>
#include <Poco/UTF8String.h>
#include <Poco/NullStream.h>
#include <Poco/Net/SSLManager.h>
#include <Poco/Net/InvalidCertificateHandler.h>
#include <Poco/Net/RejectCertificateHandler.h>

namespace API
{
	class Requests::impl
	{
	public:
		void WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result);

		Poco::Net::HTTPRequest ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session,
			const std::vector<std::string>& headers, const std::string& request_type);

		std::string GetResponse(Poco::Net::HTTPClientSession* session, Poco::Net::HTTPResponse& response);

		void Update();
	private:
		struct RequestData
		{
			std::function<void(bool, std::string)> callback;
			bool success;
			std::string result;
		};

		std::vector<RequestData> RequestsVec_;
		std::mutex RequestMutex_;
	};

	Requests::Requests()
		: pimpl{ std::make_unique<impl>() } 
	{ 
		Poco::Net::initializeSSL();
		Poco::SharedPtr<Poco::Net::InvalidCertificateHandler> ptrCert = new Poco::Net::RejectCertificateHandler(false);
		Poco::Net::Context::Ptr ptrContext = new Poco::Net::Context(Poco::Net::Context::TLS_CLIENT_USE, "", "", "", Poco::Net::Context::VERIFY_NONE, 9, false, "ALL:!ADH:!LOW:!EXP:!MD5:@STRENGTH");
		Poco::Net::SSLManager::instance().initializeClient(0, ptrCert, ptrContext);

		game_api->GetCommands()->AddOnTickCallback("RequestsUpdate", std::bind(&impl::Update, this->pimpl.get())); 
	}

	Requests::~Requests() 
	{ 
		Poco::Net::uninitializeSSL();
		game_api->GetCommands()->RemoveOnTickCallback("RequestsUpdate"); 
	}

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	void Requests::impl::WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result)
	{
		std::lock_guard<std::mutex> Guard(RequestMutex_);
		RequestsVec_.push_back({ callback, success, result });
	}

	Poco::Net::HTTPRequest Requests::impl::ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session,
		const std::vector<std::string>& headers, const std::string& request_type)
	{
		Poco::URI uri(url);

		const std::string& path(uri.getPathAndQuery());

		if (uri.getScheme() == "https")
			session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
		else
			session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

		Poco::Net::HTTPRequest request(request_type, path, Poco::Net::HTTPMessage::HTTP_1_1);

		if (!headers.empty())
		{
			for (const auto& header : headers)
			{
				const std::string& key = header.substr(0, header.find(":"));
				const std::string& data = header.substr(header.find(":") + 1);

				request.add(key, data);
			}
		}

		return request;
	}

	std::string Requests::impl::GetResponse(Poco::Net::HTTPClientSession* session, Poco::Net::HTTPResponse& response)
	{
		std::string result = "";

		std::istream& rs = session->receiveResponse(response);

		if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
		{
			std::ostringstream oss;
			Poco::StreamCopier::copyStream(rs, oss);
			result = oss.str();
		}
		else
		{
			Poco::NullOutputStream null;
			Poco::StreamCopier::copyStream(rs, null);
			result = std::to_string(response.getStatus()) + " " + response.getReason();
		}

		return result;
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers)
	{
		std::thread([this, url, callback, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_GET);

					session->sendRequest(request);
					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& post_data, std::vector<std::string> headers)
	{
		std::thread([this, url, callback, post_data, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST);

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::string& post_data, const std::string& content_type, std::vector<std::string> headers)
	{
		std::thread([this, url, callback, post_data, content_type, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST);

					request.setContentType(content_type);
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		const std::vector<std::string>& post_ids,
		const std::vector<std::string>& post_data, std::vector<std::string> headers)
	{
		if (post_ids.size() != post_data.size())
			return false;

		std::thread([this, url, callback, post_ids, post_data, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_POST);

					std::string body;

					for (size_t i = 0; i < post_ids.size(); ++i)
					{
						const std::string& id = post_ids[i];
						const std::string& data = post_data[i];

						body += fmt::format("{}={}&", Poco::UTF8::escape(id), Poco::UTF8::escape(data));
					}

					body.pop_back(); // Remove last '&'

					request.setContentType("application/x-www-form-urlencoded");
					request.setContentLength(body.size());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << body;

					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	bool Requests::CreateDeleteRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
		std::vector<std::string> headers)
	{
		std::thread([this, url, callback, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);
				Poco::Net::HTTPClientSession* session = nullptr;

				try
				{
					Poco::Net::HTTPRequest& request = pimpl->ConstructRequest(url, session, headers, Poco::Net::HTTPRequest::HTTP_DELETE);

					session->sendRequest(request);
					Result = pimpl->GetResponse(session, response);
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				const bool success = (int)response.getStatus() >= 200
					&& (int)response.getStatus() < 300;

				pimpl->WriteRequest(callback, success, Result);
				delete session;
				session = nullptr;
			}
		).detach();

		return true;
	}

	void Requests::impl::Update()
	{
		if (RequestsVec_.empty())
			return;

		RequestMutex_.lock();
		std::vector<RequestData> requests_temp = std::move(RequestsVec_);
		RequestMutex_.unlock();

		for (const auto& request : requests_temp) { request.callback(request.success, request.result); }
	}
} // namespace API