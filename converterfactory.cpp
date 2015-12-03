#ifndef BUW_ABSTRACTCONVERTERFACTORY
#define BUW_ABSTRACTCONVERTERFACTORY

#include <map>
#include "converter.hpp"

class ConverterFactory
{
	public:
		Converter create(std::string className) const;
	private:
		std::map<std::string, Converter> factoryMap;
};

#endif