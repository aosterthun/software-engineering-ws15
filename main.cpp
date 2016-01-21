#include <memory>
#include "converterfactory.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotodanishkroneconverter.hpp"
#include "centimetertoinchesconverter.hpp"
#include "kilometertomilesconverter.hpp"
#include "command.hpp"
#include "deque"

std::map<std::string, converter*> ConverterFactory::prototypes;
ConverterFactory* ConverterFactory::instance;

int main(int argc, char* argv[]) {
	ConverterFactory* factory = ConverterFactory::getInstance();
	factory->registerClass("dollarToEuro", new dollarToEuroConverter);
	factory->registerClass("euroToDollar", new euroToDollarConverter);
	factory->registerClass("euroToDanishKrone", new euroToDanishKroneConverter);
	factory->registerClass("centimeterToInches", new centimeterToInchesConverter);
	factory->registerClass("kilometerToMiles", new kilometerToMilesConverter);

    std::deque<Command> commandList;

    std::string inputStr;
    for (std::string line; std::getline(std::cin, inputStr, ' ');) 
    {
        std::string input_str;
        std::getline(std::cin, input_str);
        auto convert = factory->create(inputStr);

        double (converter::*convertMethod)(double) = NULL;
        convertMethod = &converter::convert;

        commandList.push_back(
            Command{convertMethod, convert, std::stod(input_str) }
        );
        std::cout << "rolf";
    }

    for (auto&& command : commandList) {
        command.execute();
    }
	return 0;
}

