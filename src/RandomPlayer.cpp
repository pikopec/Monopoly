#include "RandomPlayer.hpp"
#include <iostream>

RandomPlayer::RandomPlayer(std::string name, int initMoney)
    : Player(name, initMoney) {}

bool RandomPlayer::decideToBuy()
{
    return (rand() % 2);
}

