#include "Die.hpp"

Die::Die(int numberOfSides) : m_numberOfSides(numberOfSides)
{
    srand(time(NULL));
}

