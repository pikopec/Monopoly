#pragma once
#include <string>
#include "Field.hpp"

class Player
{
public:
    Player(std::string name, int initMoney, Field& startField);
    void changeMoney(int value);
    bool isBancrupt() const;
    void move(int numberOfFields);
private:
    std::string m_name;
    int m_money;
    Field& currentField;
};
