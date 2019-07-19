#pragma once
#include "Field.hpp"
#include "StandardField.hpp"
#include "StartField.hpp"
#include "DepositField.hpp"
#include "RealEstateField.hpp"
#include "RandomField.hpp"
#include <array>

class Board
{
public:
    Board();
    Field& getStartingField();
private:
    void addField(std::string name);
    std::array<Field*, 40> fields;
};
