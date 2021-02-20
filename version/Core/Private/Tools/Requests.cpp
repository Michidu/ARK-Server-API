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
#include <Poco/UTF8String.h>

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
		std::lock_guard<std::mutex> Guard(RequestMutex_);
		RequestsVec_.push_back({ callback, success, result });
	}

	bool Requests::CreateGetRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                std::vector<std::string> headers)
	{
		std::thread([this, url, callback, headers]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					Poco::URI uri(url);

					const std::string& path(uri.getPathAndQuery());

					Poco::Net::HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

					Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_GET, path, Poco::Net::HTTPMessage::HTTP_1_1);

					if (!headers.empty())
					{
						for (const auto &header : headers)
						{
							const std::string& key = header.substr(0, header.find(":"));
							const std::string& data = header.substr(header.find(":") + 1);

							request.add(key, data);
						}
					}

					session->sendRequest(request);
					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						Poco::StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
					else
						Result = response.getStatus();
				}
				catch (const Poco::Exception& exc)
				{
					Log::GetLog()->error(exc.displayText());
				}

				WriteRequest(callback, response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK, Result);
			}
		).detach();

		return true;
	}

	bool Requests::CreatePostRequest(const std::string& url, const std::function<void(bool, std::string)>& callback,
	                                 const std::string& post_data, std::vector<std::string> headers, const std::string& content_type)
	{
		std::thread([this, url, callback, post_data, headers, content_type]
			{
				std::string Result = "";
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					Poco::URI uri(url);

					const std::string& path(uri.getPathAndQuery());

					Poco::Net::HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

					Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_POST, path, Poco::Net::HTTPMessage::HTTP_1_1);

					if (!headers.empty())
					{
						for (const auto& header : headers)
						{
							const std::string& key = header.substr(0, header.find(":"));
							const std::string& data = header.substr(header.find(":") + 1);

							request.add(key, data);
						}
					}

					if (!content_type.empty())
						request.setContentType(content_type);
					else
						request.setContentType("text/plain");

					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						Poco::StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
					else
						Result = response.getStatus();
				}
				catch (const Poco::Exception& exc)
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
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					Poco::URI uri(url);

					const std::string& path(uri.getPathAndQuery());

					Poco::Net::HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

					Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_POST, path, Poco::Net::HTTPMessage::HTTP_1_1);

					if (!headers.empty())
					{
						for (const auto& header : headers)
						{
							const std::string& key = header.substr(0, header.find(":"));
							const std::string& data = header.substr(header.find(":") + 1);

							request.add(key, data);
						}
					}

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

					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						Poco::StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
					else
						Result = response.getStatus();
				}
				catch (const Poco::Exception& exc)
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
				Poco::Net::HTTPResponse response(Poco::Net::HTTPResponse::HTTP_BAD_REQUEST);

				try
				{
					Poco::URI uri(url);

					const std::string& path(uri.getPathAndQuery());

					Poco::Net::HTTPClientSession* session = 0;

					if (uri.getScheme() == "https")
						session = new Poco::Net::HTTPSClientSession(uri.getHost(), uri.getPort());
					else
						session = new Poco::Net::HTTPClientSession(uri.getHost(), uri.getPort());

					Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_DELETE, path, Poco::Net::HTTPMessage::HTTP_1_1);

					if (!headers.empty())
					{
						for (const auto& header : headers)
						{
							const std::string& key = header.substr(0, header.find(":"));
							const std::string& data = header.substr(header.find(":") + 1);

							request.add(key, data);
						}
					}

					session->sendRequest(request);
					std::istream& rs = session->receiveResponse(response);
					if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
					{
						std::ostringstream oss;
						Poco::StreamCopier::copyStream(rs, oss);
						Result = oss.str();
					}
					else
						Result = response.getStatus();
				}
				catch (const Poco::Exception& exc)
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
		if (RequestsVec_.empty())
			return;

		RequestMutex_.lock();
		std::vector<RequestData> requests_temp = RequestsVec_;
		RequestsVec_.clear();
		RequestMutex_.unlock();

		for (const auto& request : requests_temp) { InvokeCallback(request.callback, request.success, request.result); }
	}
} // namespace API
