#include "RandomField.hpp"
#include <iostream>
#include "Player.hpp"



void RandomField::onPass(Player& player)
{
    getRandomField().onPass(player);
}

void RandomField::onStand(Player& player)
{
    getRandomField().onStand(player);
}

RandomField::RandomField(Field* first, Field* second, Field* third)
{
    fields[0] = first;
    fields[1] = second;
    fields[2] = third;
}

Field& RandomField::getRandomField()
{
    return *(fields[rand()%3]);
}
