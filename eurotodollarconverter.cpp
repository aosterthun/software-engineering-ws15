#include "eurotodollarconverter.hpp"
#include "command.hpp"
#include <string>

euroToDollarConverter::euroToDollarConverter()
{

}

euroToDollarConverter::~euroToDollarConverter()
{

}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double euroToDollarConverter::convert(double inputEuro){
  return inputEuro*0.88;
}

std::string euroToDollarConverter::toString() const{
  return "Euro to Dollar Converter";
}

void euroToDollarConverter::print() const{
  std::cout << toString();
}

converter* euroToDollarConverter::clone()
{
	return new euroToDollarConverter();
}
