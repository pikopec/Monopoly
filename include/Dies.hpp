#pragma once
#include <stdlib.h>
#include <ctime>


class Dies {
public:
    Dies(int numberOfDies);
    int roll();
private:
    int m_numberOfDies;
};
