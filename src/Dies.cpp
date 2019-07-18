#include "Dies.hpp"


Dies::Dies(int numberOfDies) : m_numberOfDies(numberOfDies)
{
    srand(time(NULL));
}

int Dies::roll()
{
    int result = 0;
    for(int i = 0; i < m_numberOfDies; i++)
    {
        result += (rand() % 6) + 1;
    }

    return result;
}

