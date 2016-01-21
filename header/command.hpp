#ifndef COMMAND_H
#define COMMAND_H

#include <memory>
#include "converter.hpp"

typedef double(converter::*Action)(double);

class Command {
 public:
    Command(Action method, converter* converter, double input) :
    m_method{method},
    m_converter{converter},
    m_input{input} {}

    void execute() const 
    {
        std::cout << "omfg";
    	std::cout << "Converted " << m_input << " to " << (*m_converter.*m_method)(m_input) << std::endl;
    }

 private:
    Action m_method;
    converter* m_converter;
    double m_input;
};

#endif