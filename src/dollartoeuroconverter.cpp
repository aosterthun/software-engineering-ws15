#include "dollartoeuroconverter.hpp"
#include <string>

dollarToEuroConverter::dollarToEuroConverter()
{
}
dollarToEuroConverter::dollarToEuroConverter(converter* conv) : ConverterDecorator{conv}
{
}

dollarToEuroConverter::~dollarToEuroConverter()
{
}

double dollarToEuroConverter::convert(double inputDollars){
  return ConverterDecorator::convert(inputDollars*0.88);
}

std::string dollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void dollarToEuroConverter::print() const{
  std::cout << toString();
}

converter* dollarToEuroConverter::clone() 
{
	return new dollarToEuroConverter();
}
