#pragma once
#include "Player.hpp"

class AllInPlayer : public Player
{
public:
    AllInPlayer(std::string name, int initMoney);
    virtual bool decideToBuy() override;
};
