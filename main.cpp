#include <memory>
#include "converterfactory.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotodanishkroneconverter.hpp"
#include "centimetertoinchesconverter.hpp"
#include "kilometertomilesconverter.hpp"

std::map<std::string, converter*> ConverterFactory::prototypes;
ConverterFactory* ConverterFactory::instance;

int main(int argc, char* argv[])
{	
	std::string conversion = argv[1];
	std::string value = argv[2];
	ConverterFactory* converter = ConverterFactory::getInstance();
	converter->registerClass("dollarToEuroConverter", new dollarToEuroConverter);
	converter->registerClass("euroToDollarConverter", new euroToDollarConverter);
	converter->registerClass("euroToDanishKroneConverter", new euroToDanishKroneConverter);
	converter->registerClass("centimeterToInchesConverter", new centimeterToInchesConverter);
	converter->registerClass("kilometerToMilesConverter", new kilometerToMilesConverter);


	try
	{
		auto myConverter = converter->create(conversion);
		double output = myConverter->convert(std::stod(value));
		std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	}catch(int e)
	{
		std::cout << "Your conversion type is not supported";
	}
	return 0;
}

