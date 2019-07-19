#include "Field.hpp"
#include <iostream>
#include "Player.hpp"

Field::Field(int value) : valueToAdd(value) {}

Field::Field() : valueToAdd(0), nextField(NULL) {}

void Field::initializeNextField(Field *field)
{
    nextField = field;
}

void Field::printValue() const
{
    std::cout << "Value: " << valueToAdd << std::endl;
}

Field* Field::getNextField()
{
    return nextField;
}
