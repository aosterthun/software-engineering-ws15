#ifndef KILOMETERMILES_H
#define KILOMETERMILES_H

#include "lengthconverter.hpp"

class kilometerToMilesConverter : public lengthconverter
{
  public:
    kilometerToMilesConverter();
    ~kilometerToMilesConverter();
    double convert(double inKilometers) override;
    std::string toString() const override;
    void print() const override;
    converter* clone() override;
};

#endif // KILOMETERMILES_H