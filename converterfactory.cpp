#ifndef BUW_ABSTRACTCONVERTERFACTORY
#define BUW_ABSTRACTCONVERTERFACTORY

#include <map>
#include <memory>
#include "converter.hpp"


class ConverterFactory
{
	public:
		std::shared_ptr<converter> create(std::string className) const;
	private:
		std::map<std::string, std::shared_ptr<converter>> factoryMap;
};

#endif