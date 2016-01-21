#ifndef BUW_EUROTODOLLARCONVERTER
#define BUW_EUROTODOLLARCONVERTER

#include "abstractdecorator.hpp"

class euroToDollarConverter : public ConverterDecorator
{
public:
	euroToDollarConverter();
	euroToDollarConverter(converter* conv);
	~euroToDollarConverter();

	double convert(double inputEuro);
    std::string toString() const;
    void print() const;
    converter* clone() override;
	
};
	
#endif