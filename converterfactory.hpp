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
		converter* create(std::string className)
		{
			auto newObject = ConverterFactory::prototypes.find(className);
			return newObject->second->clone();
		}

		void registerClass(std::string className, converter* prototype)
		{
			ConverterFactory::prototypes.insert(std::make_pair(className, prototype));
		}
	private:
		static std::map<std::string, converter*> prototypes;
};
#endif