#ifndef BUW_EUROTODANISHKRONE
#define BUW_EUROTODANISHKRONE

#include "abstractdecorator.hpp"

class euroToDanishKroneConverter : public ConverterDecorator
{
public:
	euroToDanishKroneConverter();
	euroToDanishKroneConverter(converter* conv);
	~euroToDanishKroneConverter();

	double convert(double inEuro);
    std::string toString() const;
    void print() const;
    converter* clone() override;
	
};
	
#endif