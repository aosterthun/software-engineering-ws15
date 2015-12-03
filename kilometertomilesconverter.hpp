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
    std::shared_ptr<converter> clone();
};

#endif // KILOMETERMILES_H