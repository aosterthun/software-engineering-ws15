#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <memory>

class converter
{
  public:
    converter();
    ~converter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual std::shared_ptr<converter> clone() = 0;
};

#endif // CONVERTER_H
