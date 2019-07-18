#pragma once
#include "Field.hpp"
class Player;

class StandardField : public Field
{
public:
    StandardField(int value);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
};
