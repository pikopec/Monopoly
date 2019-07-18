#pragma once
#include "Field.hpp"
class Player;

class DepositField : public Field
{
public:
    DepositField(int value);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
private:
    int tax;
};
