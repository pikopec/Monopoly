#include "AllInPlayer.hpp"
#include <iostream>

AllInPlayer::AllInPlayer(std::string name, int initMoney)
    : Player(name, initMoney) {}

bool AllInPlayer::decideToBuy()
{
    return true;
}
