#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class dollarToEuroConverter : public currencyconverter
{
  public:
    dollarToEuroConverter();
    ~dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
    converter* clone() const override;
};

#endif // DOLLARTOEUROCONVERTER_H
