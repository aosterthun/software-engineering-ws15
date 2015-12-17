#include "centimetertoinchesconverter.hpp"
#include <string>

centimeterToInchesConverter::centimeterToInchesConverter()
{

}

centimeterToInchesConverter::centimeterToInchesConverter(converter* conv) : ConverterDecorator{conv}
{

}

centimeterToInchesConverter::~centimeterToInchesConverter()
{
}

double centimeterToInchesConverter::convert(double inputCentimeters){
  return ConverterDecorator::convert(inputCentimeters/2.54);
}

std::string centimeterToInchesConverter::toString() const{
  return "Centimeter to Inches Converter";
}

void centimeterToInchesConverter::print() const{
  std::cout << toString();
}

converter* centimeterToInchesConverter::clone()
{
	return new centimeterToInchesConverter();
}