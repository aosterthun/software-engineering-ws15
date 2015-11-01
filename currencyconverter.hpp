#ifndef BUW_CURRENCYCONVERTER
#define BUW_CURRENCYCONVERTER

#include "converter.hpp"

class currencyconverter : converter
{
public:
	currencyconverter();
	~currencyconverter();
	virtual double convert(double inValue) = 0;
	virtual std::string toString() const = 0;
	virtual void print() const = 0;
};

#endif