#pragma once
class Player;

class Field
{
public:
    void printValue() const;
    Field(int value);
    Field();
    void initializeNextField(Field* field);
    Field* getNextField();
    virtual void onPass(Player& player) = 0;
    virtual void onStand(Player& player) = 0;
protected:
    int valueToAdd;
    Field* nextField;
};
