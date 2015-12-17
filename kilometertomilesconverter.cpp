#include "kilometertomilesconverter.hpp"
#include <string>

kilometerToMilesConverter::kilometerToMilesConverter()
{
}
kilometerToMilesConverter::kilometerToMilesConverter(converter* conv) : ConverterDecorator{conv}
{

}

kilometerToMilesConverter::~kilometerToMilesConverter()
{
}

double kilometerToMilesConverter::convert(double inputKilometers){
  return ConverterDecorator::convert(inputKilometers*0.621371);
}

std::string kilometerToMilesConverter::toString() const{
  return "Kilometers to Miles Converter";
}

void kilometerToMilesConverter::print() const{
  std::cout << toString();
}

converter* kilometerToMilesConverter::clone(){
	return new kilometerToMilesConverter();
}
