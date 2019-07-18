#include "StandardField.hpp"
#include <iostream>
#include "Player.hpp"


StandardField::StandardField(int value) : Field(value) {}

void StandardField::onPass(Player& player)
{
    (void)player;
    // nic
}

void StandardField::onStand(Player& player)
{
    player.changeMoney(valueToAdd);
}
