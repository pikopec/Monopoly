#pragma once
#include "Field.hpp"
class Player;

class StartField : public Field
{
public:
    StartField(int value);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
};
