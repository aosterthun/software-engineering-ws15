#include "kilometertomilesconverter.hpp"
#include <string>

kilometerToMilesConverter::kilometerToMilesConverter()
{
}

kilometerToMilesConverter::~kilometerToMilesConverter()
{
}

double kilometerToMilesConverter::convert(double inputKilometers){
  return inputKilometers*0.621371;
}

std::string kilometerToMilesConverter::toString() const{
  return "Kilometers to Miles Converter";
}

void kilometerToMilesConverter::print() const{
  std::cout << toString();
}

std::shared_ptr<converter> clone(){
	return std::make_shared<kilometerToMilesConverter>();
}
