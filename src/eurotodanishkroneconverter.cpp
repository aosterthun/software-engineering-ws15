#include "eurotodanishkroneconverter.hpp"

#include <string>

euroToDanishKroneConverter::euroToDanishKroneConverter()
{

}
euroToDanishKroneConverter::euroToDanishKroneConverter(converter* conv) : ConverterDecorator{conv}
{

}
euroToDanishKroneConverter::~euroToDanishKroneConverter()
{

}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double euroToDanishKroneConverter::convert(double inputEuro){
	std::cout << "asdf";
	if(typeid(inputEuro).name() != "double"){
		std::cout << "asdf";
		throw std::invalid_argument("Please insert a double value!");
	}

  return ConverterDecorator::convert(inputEuro*7.46099733);
}

std::string euroToDanishKroneConverter::toString() const{
  return "Euro to Danish krone Converter";
}

void euroToDanishKroneConverter::print() const{
  std::cout << toString();
}

converter* euroToDanishKroneConverter::clone()
{
	return new euroToDanishKroneConverter();
}
