#pragma once
#include "Field.hpp"
#include "StandardField.hpp"
#include "RealEstateField.hpp"
#include "DepositField.hpp"
#include <array>
#include <stdlib.h>

class Player;

class RandomField : public Field
{
public:
    RandomField(Field* first, Field* second, Field* third);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
private:
    std::array<Field*, 3> fields;
    Field& getRandomField();
};
