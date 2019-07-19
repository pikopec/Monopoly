#pragma once
#include "Field.hpp"
class Player;

class BlackHoleField : public Field
{
public:
    BlackHoleField(Field* field);
    virtual void onPass(Player& player) override;
    virtual void onStand(Player& player) override;
private:
    bool skipFlag {false};
    Field* field;
};
