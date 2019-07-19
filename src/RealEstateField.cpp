#include "RealEstateField.hpp"
#include <iostream>
#include "Player.hpp"


RealEstateField::RealEstateField(int price, int fee) : fieldPrice(price), rentalFee(fee) {}

void RealEstateField::onPass(Player& player)
{
    (void)player;
    // nic
}

void RealEstateField::onStand(Player& player)
{
    if(isOwned())
    {
        payFee(player);
    }
    else
    {
        proposePurchase(player);
    }
}

void RealEstateField::payFee(Player& player)
{
    int fee = std::min(player.getMoney(), rentalFee);
    player.changeMoney(-fee);
    owner->changeMoney(fee);
}

void RealEstateField::proposePurchase(Player& player)
{
    if(player.getMoney() > fieldPrice && player.decideToBuy())
    {
        player.changeMoney(-fieldPrice);
        owner = &player;
    }
}

bool RealEstateField::isOwned()
{
    if(owner == NULL) return false;
    if(owner->isActive()) return true;

    owner = NULL;
    return false;
}
