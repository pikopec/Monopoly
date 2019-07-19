#include "Die.hpp"

class CosmicDie : public Die
{
public:
    CosmicDie(int numberOfSides);
    virtual int roll() override;
};
