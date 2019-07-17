#pragma once
#include <string>
#include "Field.hpp"

class Player
{
public:
    Player(std::string name, int initMoney);
    void changeMoney(int value);
    bool isBancrupt();
    void move();
private:
    std::string m_name;
    int m_money;
    Field& currentField;
};
