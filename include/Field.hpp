#pragma once

class Field
{
public:
    int getValue();
    void printValue() const;
    Field(int value);
    Field();
private:
    int valueToAdd;
};
