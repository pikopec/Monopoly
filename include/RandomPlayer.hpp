#pragma once
#include "Player.hpp"

class RandomPlayer : public Player
{
public:
    RandomPlayer(std::string name, int initMoney);
    virtual bool decideToBuy() override;
};
