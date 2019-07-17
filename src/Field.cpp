#include "Field.hpp"

Field::Field(int value) : valueToAdd(value) {}

void Field::printValue() const
{
    std::cout << "Value: " << valueToAdd << std::endl;
}

int Field::getValue()
{
    return valueToAdd;
}
