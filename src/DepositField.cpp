#include "DepositField.hpp"
#include <iostream>
#include "Player.hpp"


DepositField::DepositField(int value) : Field(0), tax(value) {}

void DepositField::onPass(Player& player)
{
    int playerMoney = player.getMoney();
    if(playerMoney >= tax)
    {
        player.changeMoney(-tax);
        valueToAdd += tax;
    }
    else
    {
        player.changeMoney(-playerMoney);
        valueToAdd += playerMoney;
    }
}

void DepositField::onStand(Player& player)
{
    player.changeMoney(valueToAdd);
    valueToAdd = 0;
}
