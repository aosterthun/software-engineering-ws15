#include <memory>
#include <dollartoeuroconverter.hpp>
#include <eurotodollarconverter.hpp>
#include <eurotodanishkroneconverter.hpp>
#include <centimetertoinchesconverter.hpp>
#include <kilometertomilesconverter.hpp>

int main(int argc, char* argv[])
{
	std::string conversion = argv[1];
	std::string value = argv[2];

	 //std::cout << conversion;
	 if (conversion == "dollarToEuroConverter")
	 {
		auto myConverter = std::make_shared<dollarToEuroConverter>();
		double output = myConverter->convert(std::stod(value));
		std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	 } 
	 else if (conversion == "euroToDollarConverter")
	 {
		 auto myConverter = std::make_shared<euroToDollarConverter>();
		 double output = myConverter->convert(std::stod(value));
		 std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	 }
	 else if (conversion == "euroToDanishKroneConverter")
	 {
		 auto myConverter = std::make_shared<euroToDanishKroneConverter>();
		 double output = myConverter->convert(std::stod(value));
		 std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	 }
	 else if (conversion == "centimeterToInchesConverter")
	 {
	   auto myConverter = std::make_shared<centimeterToInchesConverter>();
	   double output = myConverter->convert(std::stod(value));
	   std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	 }
	 else if (conversion == "kilometerToMilesConverter")
	 {
	   auto myConverter = std::make_shared<kilometerToMilesConverter>();
	   double output = myConverter->convert(std::stod(value));
	   std::cout << myConverter->toString() << " has converted "<< value << " to " << output <<" !"<<std::endl;
	 }
	return 0;
}

