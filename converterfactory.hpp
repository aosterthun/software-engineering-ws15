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
	private:
		static std::map<std::string, converter*> prototypes;
		ConverterFactory(){}
		static ConverterFactory* instance;

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
		static ConverterFactory* getInstance()
		{
			if(instance == NULL)
			{
				instance = new ConverterFactory;
			}
			return instance;
		}
};
#endif