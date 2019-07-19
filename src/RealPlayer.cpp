#include "RealPlayer.hpp"
#include <iostream>

RealPlayer::RealPlayer(std::string name, int initMoney)
    : Player(name, initMoney) {}

bool RealPlayer::decideToBuy()
{
    bool decision;
    std::cout << "Get Input decision for Player " << m_name << ":";
    std::cin >>decision;
    return decision;
}
