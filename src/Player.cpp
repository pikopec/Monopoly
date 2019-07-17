#include "Player.hpp"

Player::Player(std::string name, int initMoney, Field& startField) :
    m_name(name), m_money(initMoney), currentField(startField) {}

void Player::changeMoney(int value)
{
    m_money += value;
}

bool Player::isBancrupt()
{
    return m_money <= 0;
}

void Player::move(Field& newPosition)
{
    currentField = newPosition;
    m_money += newPosition.getValue();
}
