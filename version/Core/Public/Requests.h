#pragma once

#include <functional>

#include "API/Base.h"

namespace API
{
	class Requests
	{
	public:
		ARK_API static Requests& Get();

		Requests();
		~Requests();

		Requests(const Requests&) = delete;
		Requests(Requests&&) = delete;
		Requests& operator=(const Requests&) = delete;
		Requests& operator=(Requests&&) = delete;

		/**
		 * \brief Creates an async GET Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds sucess(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param included headers
		 */
		ARK_API bool CreateGetRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request with application/x-www-form-urlencoded content type that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds sucess(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param included headers
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds sucess(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data to post
		 * \param content type
		 * \param included headers
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::string& post_data,
			const std::string& content_type,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async POST Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds sucess(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param data key
		 * \param data value
		 * \param included headers
		 */
		ARK_API bool CreatePostRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			const std::vector<std::string>& post_ids,
			const std::vector<std::string>& post_data,
			std::vector<std::string> headers = {});

		/**
		 * \brief Creates an async DELETE Request that runs in another thread but calls the callback from the main thread
		 * \param request URL
		 * \param the callback function, binds sucess(bool) and result(string), result is error code if request failed and the response otherwise
		 * \param included headers
		 */
		ARK_API bool CreateDeleteRequest(const std::string& url,
			const std::function<void(bool, std::string)>& callback,
			std::vector<std::string> headers = {});
	private:
		class impl;
		std::unique_ptr<impl> pimpl;
	};
} // namespace API
