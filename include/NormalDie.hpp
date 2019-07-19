#include "Die.hpp"

class NormalDie : public Die
{
public:
    NormalDie(int numberOfSides);
    virtual int roll() override;
};
