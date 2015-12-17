#include "abstractdecorator.hpp"

ConverterDecorator::ConverterDecorator() 
{

}

ConverterDecorator::ConverterDecorator(converter* conv) : _base{ conv }
{

}

ConverterDecorator::~ConverterDecorator()
{

}
double ConverterDecorator::convert(double inValue) 
{
	if(_base)
	{
		return _base->convert(inValue);
	}
	else
	{
		return inValue;
	}
}
std::string ConverterDecorator::toString() const 
{
	if(_base)
	{
		return _base->toString();
	}
	else
	{
		throw 2;
	}
}
void ConverterDecorator::print() const 
{
	std::cout << toString();
}
converter* ConverterDecorator::clone() 
{
	return _base->clone();
}