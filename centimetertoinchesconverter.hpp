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
    converter* clone() override;
};

#endif // CENTIMETERTOINCHES_H