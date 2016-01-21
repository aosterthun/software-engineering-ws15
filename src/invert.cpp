#include "invert.hpp"

Invert::Invert() 
{

}

Invert::Invert(converter* conv) :ConverterDecorator{conv}
{

}

Invert::~Invert()
{

}
double Invert::convert(double inValue) 
{
	if(_base)
	{
		return inValue / _base->convert(1.0);
	}
	else
	{
		return inValue;
	}
}
std::string Invert::toString() const 
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
void Invert::print() const 
{
	std::cout << toString();
}
converter* Invert::clone() 
{
	return _base->clone();
}