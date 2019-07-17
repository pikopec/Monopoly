#pragma once
#include "Player.hpp"

class Field
{
public:
    int getValue();
    void printValue() const;
    Field(int value);
private:
    int valueToAdd;
};
