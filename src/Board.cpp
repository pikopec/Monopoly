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
        fields[i].initializeNextField(&fields[(i+1)%fields.size()]);
    }

    std::for_each(fields.begin(), fields.end(), [](const auto& field) { field.printValue(); } );
}

Field& Board::getStartingField()
{
    return fields.front();
}

