#ifndef KILOMETERMILES_H
#define KILOMETERMILES_H

#include "abstractdecorator.hpp"

class kilometerToMilesConverter : public ConverterDecorator
{
  public:
    kilometerToMilesConverter();
    kilometerToMilesConverter(converter* conv);
    ~kilometerToMilesConverter();
    double convert(double inKilometers) override;
    std::string toString() const override;
    void print() const override;
    converter* clone() override;
};

#endif // KILOMETERMILES_H