#ifndef BUW_ABSTRACTCONVERTERFACTORY
#define BUW_ABSTRACTCONVERTERFACTORY

#include <map>
#include <memory>
#include "converter.hpp"


class ConverterFactory
{
	public:
		static std::shared_ptr<converter> create(std::string className) const;
	private:
		static std::map<std::string, std::shared_ptr<converter>> factoryMap = {
																				{"dollarToEuroConverter", new dollarToEuroConverter()},
																				{"euroToDollarConverter", new euroToDollarConverter},
																				{"euroToDanishKroneConverter", new euroToDanishKroneConverter}, 
																				{"centimeterToInchesConverter", new centimeterToInchesConverter},
																				{"kilometerToMilesConverter", new kilometerToMilesConverter}};
};

#endif