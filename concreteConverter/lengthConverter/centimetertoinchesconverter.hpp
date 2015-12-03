#ifndef CENTIMETERTOINCHES_H
#define CENTIMETERTOINCHES_H

#include "lengthconverter.hpp"

class centimeterToInchesConverter : public lengthconverter
{
  public:
    centimeterToInchesConverter();
    ~centimeterToInchesConverter();
    double convert(double inCentimeters) override;
    std::string toString() const override;
    void print() const override;
    std::shared_pointer<Converter> clone();
};

#endif // CENTIMETERTOINCHES_H