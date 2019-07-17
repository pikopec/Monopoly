#include "Field.hpp"
#include <iostream>

Field::Field(int value) : valueToAdd(value) {}
Field::Field() : valueToAdd(0) {}
void Field::initializeNextField(Field *field)
{
    nextField = field;
}

void Field::printValue() const
{
    std::cout << "Value: " << valueToAdd << std::endl;
}
#include "Player.hpp"

int Field::getValue()
{
    return valueToAdd;
}

Field* Field::getNextField()
{
    return nextField;
}

void Field::onPass(Player& player)
{
    (void)player;
    // nic
}

void Field::onStand(Player& player)
{
    player.changeMoney(valueToAdd);
}
