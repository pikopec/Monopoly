#pragma once
#include <stdlib.h>
#include <ctime>
#include <vector>
#include "Die.hpp"
#include "NormalDie.hpp"
#include "CosmicDie.hpp"


class Dies {
public:
    Dies();
    int roll();
    void addDie(Die* die);
private:
    std::vector<Die*> dies;

    int m_numberOfDies;
    int m_numberOfSides;
};
