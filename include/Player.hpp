#pragma once
#include <string>
#include "Field.hpp"

class Player
{
public:
    Player(std::string name, int initMoney);
    void changeMoney(int value);
    bool isBancrupt() const;
    void move(int numberOfFields);
    std::string getName() const;
    int getMoney() const;
    bool isActive() const;
    void setField(Field* field);

    virtual bool decideToBuy() = 0;
private:
    Field* currentField;
protected:
    std::string m_name;
    int m_money;
};
