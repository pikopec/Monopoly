#include "CosmicDie.hpp"

int CosmicDie::roll()
{
    int firstRoll = rand() % m_numberOfSides;
    return firstRoll ? firstRoll : rand() % 2;
}

CosmicDie::CosmicDie(int numberOfSides) : Die(numberOfSides) {}
