#include "BlackHoleField.hpp"
#include <iostream>
#include "Player.hpp"


BlackHoleField::BlackHoleField(Field* field) : Field(0), field(field) {}

void BlackHoleField::onPass(Player& player)
{
    field->onPass(player);
}

void BlackHoleField::onStand(Player& player)
{
    if(skipFlag)
    {
        field->onStand(player);
        skipFlag = false;
    }
    skipFlag = true;
}
