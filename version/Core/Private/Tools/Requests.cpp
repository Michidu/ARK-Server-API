#define WIN32_LEAN_AND_MEAN
#include <Requests.h>

#include "../IBaseApi.h"

#include <sstream>

#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPSClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/Net/HTTPCredentials.h>
#include <Poco/StreamCopier.h>
#include <Poco/NullStream.h>
#include <Poco/Path.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>

#pragma comment(lib, "Iphlpapi.lib")

using Poco::Net::HTTPClientSession;
using Poco::Net::HTTPSClientSession;
using Poco::Net::HTTPRequest;
using Poco::Net::HTTPResponse;
using Poco::Net::HTTPMessage;
using Poco::StreamCopier;
using Poco::Path;
using Poco::URI;
using Poco::Exception;
using Poco::Net::Context;

namespace API
{
	Requests::Requests() { game_api->GetCommands()->AddOnTickCallback("RequestsUpdate", std::bind(&Requests::Update, this)); }

	Requests::~Requests() { game_api->GetCommands()->RemoveOnTickCallback("RequestsUpdate"); }

	Requests& Requests::Get()
	{
		static Requests instance;
		return instance;
	}

	void Requests::InvokeCallback(std::function<void(bool, std::string)> callback, bool success, std::string result) { callback(success, result); }

	void Requests::WriteRequest(std::function<void(bool, std::string)> callback, bool success, std::string result)
	{
		if (!WasTickCalled_)
			InvokeCallback(callback, success, result);
		else
		{
			std::lock_guard<std::mutex> Guard(RequestMutex_);
			RequestsVec_.push_back({ callback, success, result });
		}
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                std::vector<std::string> headers)
	{
		std::thread([this, url, callback, headers]
			{
				std::string Result = "";
				HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					URI uri(url);

					std::string path(uri.getPathAndQuery());

					HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new HTTPClientSession(uri.getHost(), uri.getPort());

					HTTPRequest request(HTTPRequest::HTTP_GET, path, HTTPMessage::HTTP_1_1);

					/*if (!headers.empty())
					{
						for (const auto &header : headers)
						{
							request.add(header.first, header.second);
						}
					}*/

					session->sendRequest(request);
					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
				}
				catch (Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				WriteRequest(callback, response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK, Result);
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
				HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					URI uri(url);

					std::string path(uri.getPathAndQuery());

					HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new HTTPClientSession(uri.getHost(), uri.getPort());

					HTTPRequest request(HTTPRequest::HTTP_POST, path, HTTPMessage::HTTP_1_1);
					HTTPResponse response;

					request.setContentLength(post_data.length());
					request.setContentType("application/json");

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
				}
				catch (Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				WriteRequest(callback, response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK, Result);
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                 const std::vector<std::string>& post_ids,
	                                 const std::vector<std::string>& post_data, std::vector<std::string> headers)
	{
		std::thread([this, url, callback, post_ids, post_data, headers]
			{
				std::string Result = "";
				HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					URI uri(url);

					std::string path(uri.getPathAndQuery());

					for (size_t i = 0; i < post_ids.size(); ++i)
					{
						const std::string& id = post_ids[i];
						const std::string& data = post_data[i];

						uri.addQueryParameter(id, data);
					}

					HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new HTTPClientSession(uri.getHost(), uri.getPort());

					HTTPRequest request(HTTPRequest::HTTP_POST, path, HTTPMessage::HTTP_1_1);
					HTTPResponse response;

					request.setContentType("application/json");

					std::ostream& OutputStream = session->sendRequest(request);

					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
				}
				catch (Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				WriteRequest(callback, response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK, Result);
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
				HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					URI uri(url);

					std::string path(uri.getPathAndQuery());

					HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new HTTPClientSession(uri.getHost(), uri.getPort());

					HTTPRequest request(HTTPRequest::HTTP_DELETE, path, HTTPMessage::HTTP_1_1);

					/*if (!headers.empty())
					{
						for (const auto &header : headers)
						{
							request.add(header.first, header.second);
						}
					}*/

					session->sendRequest(request);
					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
				}
				catch (Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				WriteRequest(callback, response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK, Result);
			}
		).detach();

		return true;
	}

	void Requests::Update()
	{
		if (!WasTickCalled_)
			WasTickCalled_ = true;

		if (RequestsVec_.empty())
			return;

		RequestMutex_.lock();
		std::vector<RequestData> requests_temp = RequestsVec_;
		RequestsVec_.clear();
		RequestMutex_.unlock();

		for (const auto& request : requests_temp) InvokeCallback(request.callback, request.success, request.result);
	}
} // namespace API
