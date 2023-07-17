
// algocpp/json/class.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

// 製作中

#ifndef ALGOCPP_JSON_CLASS
#define ALGOCPP_JSON_CLASS

#include <map>
#include <utility>
#include <string>

namespace algocpp
{
	namespace json
	{
		class json
		{
		private:
			// firstが値, secondが型

			std::map<std::pair<std::string, std::string>, std::pair<std::string, std::string>> dat;

		public:
		};
	}
}

#endif
