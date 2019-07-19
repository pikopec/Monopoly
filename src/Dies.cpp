#include "Dies.hpp"


Dies::Dies() {}


int Dies::roll()
{
    int result = 0;

    for(auto die : dies)
    {
        result += die->roll();
    }

    return result;
}

void Dies::addDie(Die* die)
{
    dies.emplace_back(die);
}
