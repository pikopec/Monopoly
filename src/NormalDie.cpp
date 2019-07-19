#include "NormalDie.hpp"

int NormalDie::roll()
{
    return (rand() % m_numberOfSides) + 1;
}

NormalDie::NormalDie(int numberOfSides) : Die(numberOfSides) {}
