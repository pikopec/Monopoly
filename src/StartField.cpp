#include "StartField.hpp"
#include <iostream>
#include "Player.hpp"


StartField::StartField(int value) : Field(value) {}

void StartField::onPass(Player& player)
{
    player.changeMoney(valueToAdd);
}

void StartField::onStand(Player& player)
{
     (void)player;
}
