#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "converter.hpp"

class lengthconverter : public converter
{
	public:
		lengthconverter();
		~lengthconverter();
		virtual double convert(double inValue) = 0;
		virtual std::string toString() const = 0;
    	virtual void print() const = 0;
    	virtual converter* clone() = 0;
};

#endif // LENGTHCONVERTER_H