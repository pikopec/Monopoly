#pragma once
class Player;

class Field
{
public:
    int getValue();
    void printValue() const;
    Field(int value);
    Field();
    void initializeNextField(Field* field);
    Field* getNextField();
    void onPass(Player& player);
    void onStand(Player& player);
private:
    int valueToAdd;
    Field* nextField;
};
