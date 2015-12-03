#ifndef BUW_ABSTRACTCONVERTERFACTORY
#define BUW_ABSTRACTCONVERTERFACTORY

#include <map>
#include <memory>
#include "converter.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotodanishkroneconverter.hpp"
#include "centimetertoinchesconverter.hpp"
#include "kilometertomilesconverter.hpp"


class ConverterFactory
{
	public:
		static converter* create(std::string className);
	private:
		static std::map<std::string, converter*> factoryMap = 	{
																	{"dollarToEuroConverter", new dollarToEuroConverter},
																	{"euroToDollarConverter", new euroToDollarConverter},
																	{"euroToDanishKroneConverter", new euroToDanishKroneConverter}, 
																	{"centimeterToInchesConverter", new centimeterToInchesConverter},
																	{"kilometerToMilesConverter", new kilometerToMilesConverter}
																};
};

#endif