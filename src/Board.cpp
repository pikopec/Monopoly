#include "Board.hpp"
#include <algorithm>

Board::Board()
{
    std::array<int, 40> fieldValues = { 10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20,
                                      10 ,10, -10, 20, -20};

    for(int i = 0; i < fieldValues.size(); i++)
    {
        fields[i]= fieldValues[i];
    }

    std::for_each(fields.begin(), fields.end(), [](const auto& field) { field.printValue(); } );
}

