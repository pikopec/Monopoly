#include "Board.hpp"
#include <algorithm>
#include "Prison.hpp"

Board::Board()
{
    std::array<int, 40> fieldValues = { -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20,
                                      -10 ,-10, -10, 20, -20};

    fields[0]= new StartField(10);

    for(int i = 1; i < fieldValues.size(); i++)
    {
        if(i == 20)
        {
            fields[i]= new DepositField(10);
        }
        if(i == 10)
        {
            fields[i]= new RandomField(new DepositField(10),
                                       new RealEstateField(50, 10),
                                       new StandardField(10));
        }
        else if(i%3 == 0)
        {
            fields[i] = new RealEstateField(100, 10);
        }
        else if(i == 14 or i ==24)
        {
            fields[i]= new Prison(10);
        }
        else
        {
            fields[i]= new StandardField(fieldValues[i]);
        }
    }


    for(int i = 0; i < fieldValues.size(); i++)
    {
        fields[i]->initializeNextField(fields[(i+1)%fields.size()]);
    }

    std::for_each(fields.begin(), fields.end(), [](const auto& field) { field->printValue(); } );
}

Field& Board::getStartingField()
{
    return *(fields.front());
}

