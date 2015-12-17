#ifndef CENTIMETERTOINCHES_H
#define CENTIMETERTOINCHES_H

#include "abstractdecorator.hpp"

class centimeterToInchesConverter : public ConverterDecorator
{
  public:
    centimeterToInchesConverter();
    centimeterToInchesConverter(converter* conv);
    ~centimeterToInchesConverter();
    double convert(double inCentimeters) override;
    std::string toString() const override;
    void print() const override;
    converter* clone() override;
};

#endif // CENTIMETERTOINCHES_H