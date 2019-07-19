#include "Player.hpp"
#include <iostream>
#include "Prison.hpp"


Prison::Prison(int value) : Field(0) {}

void Prison::onPass(Player&)
{

}

void Prison::onStand(Player& player)
{
    player.goToPrison();
}
