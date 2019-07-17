#include "Player.hpp"
#include <iostream>

Player::Player(std::string name, int initMoney, Field* startField) :
    m_name(name), m_money(initMoney), currentField(startField) {}

void Player::changeMoney(int value)
{
    m_money += value;
}

bool Player::isBancrupt() const
{
    std::cout << "money: " <<  m_money << ", isBancrupt " << (m_money <= 0) << std::endl;
    return m_money <= 0;
}

void Player::move(int numberOfFields)
{
    for(int step = 1; step < numberOfFields; step++)
    {
        currentField = currentField->getNextField();
        currentField->onPass(*this);
    }
    currentField = currentField->getNextField();
    currentField->onStand(*this);
   //todo move
}

std::string Player::getName() const
{
    return m_name;
}

int Player::getMoney() const
{
    return m_money;
}
