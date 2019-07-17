#pragma once
#include "Field.hpp"
#include <array>

class Board
{
public:
    Board();
private:
    void addField(std::string name);
    std::array<Field, 40> fields;
};
