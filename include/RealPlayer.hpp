#pragma once
#include "Player.hpp"

class RealPlayer : public Player
{
public:
    RealPlayer(std::string name, int initMoney);
    virtual bool decideToBuy() override;
};
