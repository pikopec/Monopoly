#include "Player.hpp"
#include <iostream>

Player::Player(std::string name, int initMoney) :
    m_name(name), m_money(initMoney), currentField(nullptr) {}

void Player::changeMoney(int value)
{
    m_money += value;
}

bool Player::isBancrupt() const
{
    bool result = m_money <= 0;
    if(result)
    {
        std::cout << "Player: " <<  m_name << " isBancrupt;" << std::endl;
    }
    return result;
}

void Player::move(int numberOfFields)
{
    if(waitingCounter > 0)
    {
        std::cout << "Player " << m_name << "is in prison";
        --waitingCounter;
        return;
    }
    for(int step = 1; step < numberOfFields; step++)
    {
        currentField = currentField->getNextField();
        currentField->onPass(*this);
    }
    currentField = currentField->getNextField();
    currentField->onStand(*this);
}

std::string Player::getName() const
{
    return m_name;
}

int Player::getMoney() const
{
    return m_money;
}

bool Player::isActive() const
{
    return m_money > 0;
}

void Player::setField(Field* field)
{
    currentField = field;
}

void Player::goToPrison()
{
    std::cout << "Player " << m_name << "went to prison" << std::endl;
    waitingCounter = 3;
}
