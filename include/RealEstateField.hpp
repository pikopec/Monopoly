#pragma once
#include "Field.hpp"
class Player;

class RealEstateField : public Field
{
public:
    RealEstateField(int price, int fee);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
private:
    bool isOwned();
    void payFee(Player& player);
    void proposePurchase(Player& player);
    Player* owner;
    int fieldPrice;
    int rentalFee;
};
