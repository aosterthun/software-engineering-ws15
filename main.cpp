#include <memory>
#include "converterfactory.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotodanishkroneconverter.hpp"
#include "centimetertoinchesconverter.hpp"
#include "kilometertomilesconverter.hpp"

std::map<std::string, converter*> ConverterFactory::prototypes;

int main(int argc, char* argv[])
{	
	std::string conversion = argv[1];
	std::string value = argv[2];
	ConverterFactory::registerClass("dollarToEuroConverter", new dollarToEuroConverter);
	ConverterFactory::registerClass("euroToDollarConverter", new euroToDollarConverter);
	ConverterFactory::registerClass("euroToDanishKroneConverter", new euroToDanishKroneConverter);
	ConverterFactory::registerClass("centimeterToInchesConverter", new centimeterToInchesConverter);
	ConverterFactory::registerClass("kilometerToMilesConverter", new kilometerToMilesConverter);


	auto myConverter = ConverterFactory::create(conversion);
	double output = myConverter->convert(std::stod(value));
	std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	return 0;
}

