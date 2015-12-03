#include "converterfactory.hpp"

ConverterFactory::create(std::string className)
{
	return factoryMap<className>->clone();
}