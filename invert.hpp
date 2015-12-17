#ifndef BUW_INVERT
#define BUW_INVERT

#include "abstractdecorator.hpp"

class Invert : public ConverterDecorator
{
	public:
		Invert();
		Invert(converter* conv);
		~Invert();
		double convert(double inValue) override;
		std::string toString() const override;
		void print() const override;
		converter* clone() override;
};

#endif