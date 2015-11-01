#include "centimetertoinchesconverter.hpp"
#include <string>

centimeterToInchesConverter::centimeterToInchesConverter()
{
}

centimeterToInchesConverter::~centimeterToInchesConverter()
{
}

double centimeterToInchesConverter::convert(double inputCentimeters){
  return inputCentimeters*2.54;
}

std::string centimeterToInchesConverter::toString() const{
  return "Centimeter to Inches Converter";
}

void centimeterToInchesConverter::print() const{
  std::cout << toString();
}
