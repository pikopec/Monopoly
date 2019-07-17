#pragma once
#include <string>

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
