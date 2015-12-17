#ifndef BUW_ABSTRACTDECORATOR
#define BUW_ABSTRACTDECORATOR

#include "converter.hpp"

class ConverterDecorator : public converter 
{
	public:
		ConverterDecorator();
		ConverterDecorator(converter* conv);
		~ConverterDecorator();
		double convert(double inValue) override;
		std::string toString() const override;
		void print() const override;
		converter* clone() override;
	protected:
		converter* _base;
};

#endif