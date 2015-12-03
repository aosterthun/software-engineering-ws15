#ifndef BUW_EUROTODANISHKRONE
#define BUW_EUROTODANISHKRONE

#include "currencyconverter.hpp"

class euroToDanishKroneConverter : public currencyconverter
{
public:
	euroToDanishKroneConverter();
	~euroToDanishKroneConverter();

	double convert(double inEuro);
    std::string toString() const;
    void print() const;
    converter* clone() override;
	
};
	
#endif