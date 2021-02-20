#define WIN32_LEAN_AND_MEAN
#include <Requests.h>

#include "../IBaseApi.h"

#include <sstream>

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

	Poco::Net::HTTPRequest Requests::ConstructRequest(const std::string& url, Poco::Net::HTTPClientSession*& session, Poco::Net::HTTPResponse& response, 
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

	std::string Requests::GetResponse(std::istream& rs, const Poco::Net::HTTPResponse& response)
	{
		std::string result = "";

		if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
		{
			std::ostringstream oss;
			Poco::StreamCopier::copyStream(rs, oss);
			result = oss.str();
		}
		else
			result = response.getStatus();

		return result;
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
					Poco::Net::HTTPClientSession* session = nullptr;
					Poco::Net::HTTPRequest& request = ConstructRequest(url, session, response, headers, Poco::Net::HTTPRequest::HTTP_GET);

					session->sendRequest(request);
					Result = GetResponse(session->receiveResponse(response), response);
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
					Poco::Net::HTTPClientSession* session = nullptr;
					Poco::Net::HTTPRequest& request = ConstructRequest(url, session, response, headers, Poco::Net::HTTPRequest::HTTP_POST);

					request.setContentType(content_type);
					request.setContentLength(post_data.length());

					std::ostream& OutputStream = session->sendRequest(request);
					OutputStream << post_data;

					Result = GetResponse(session->receiveResponse(response), response);
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
					Poco::Net::HTTPClientSession* session = nullptr;
					Poco::Net::HTTPRequest& request = ConstructRequest(url, session, response, headers, Poco::Net::HTTPRequest::HTTP_POST);

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

					Result = GetResponse(session->receiveResponse(response), response);
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
					Poco::Net::HTTPClientSession* session = nullptr;
					Poco::Net::HTTPRequest& request = ConstructRequest(url, session, response, headers, Poco::Net::HTTPRequest::HTTP_DELETE);

					session->sendRequest(request);
					Result = GetResponse(session->receiveResponse(response), response);
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
		std::vector<RequestData> requests_temp = std::move(RequestsVec_);
		RequestMutex_.unlock();

		for (const auto& request : requests_temp) { InvokeCallback(request.callback, request.success, request.result); }
	}
} // namespace API
