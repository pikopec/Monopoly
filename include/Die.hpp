#pragma once
#include <stdlib.h>
#include <ctime>

class Die
{
public:
    virtual int roll() = 0;
    Die(int numberOfSides);
protected:
    int m_numberOfSides;
};
