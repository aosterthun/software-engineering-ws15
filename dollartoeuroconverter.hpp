#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "abstractdecorator.hpp"

class dollarToEuroConverter : public ConverterDecorator
{
  public:
    dollarToEuroConverter();
    dollarToEuroConverter(converter* conv);
    ~dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
    converter* clone() override;
};

#endif // DOLLARTOEUROCONVERTER_H
