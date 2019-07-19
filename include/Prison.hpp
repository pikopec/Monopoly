#pragma once
#include "Field.hpp"
class Player;

class Prison : public Field
{
public:
    Prison(int value);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
};
