#include <memory>
#include <stdexcept>
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
    try
    {
        for (std::string line; std::getline(std::cin, inputStr, ' ');) 
        {
                std::string input_str;
                std::getline(std::cin, input_str);
                auto convert = factory->create(inputStr);
                double (converter::*convertMethod)(double) = NULL;
                convertMethod = &converter::convert;

                if(typeid(input_str) != typeid(double))
                    throw std::invalid_argument("Please enter a double value next time!");

                commandList.push_back(
                    Command{convertMethod, convert, std::stod(input_str) }
                );
        }
        for (auto&& command : commandList) {
            command.execute();
        }
    }
    catch(std::invalid_argument e)
    {
        std::cout << e.what() << std::endl;
    }
	return 0;
}

