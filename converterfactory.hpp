#ifndef BUW_ABSTRACTCONVERTERFACTORY
#define BUW_ABSTRACTCONVERTERFACTORY

#include <map>
#include <memory>
#include <utility>
#include "converter.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotodanishkroneconverter.hpp"
#include "centimetertoinchesconverter.hpp"
#include "kilometertomilesconverter.hpp"


class ConverterFactory
{
	public:
		static converter* create(std::string className)
		{
			auto newObject = prototypes.find(className);
			return newObject->second;
		}

		static void registerClass(std::string className, converter* prototype)
		{
			prototypes.insert(std::make_pair(className, prototype));
		}
	private:
		static std::map<std::string, converter*> prototypes;
};

#endif