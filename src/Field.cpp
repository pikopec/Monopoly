#include "Field.hpp"
#include <iostream>

Field::Field(int value) : valueToAdd(value) {}
Field::Field() : valueToAdd(0) {}

void Field::printValue() const
{
    std::cout << "Value: " << valueToAdd << std::endl;
}

int Field::getValue()
{
    return valueToAdd;
}
