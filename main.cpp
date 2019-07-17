#include <iostream>
#include "Game.hpp"

int main()
{
    Game game;
    game.addPlayer("Jan");
    game.addPlayer("Maria");
    game.run();
    std::cout << "Hello!" << std::endl;
}
