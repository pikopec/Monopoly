#include <iostream>
#include "Game.hpp"

int main()
{
    Board board;
    Dies dies(2);
    int numberOfRounds = 100;
    Game game(board, numberOfRounds, dies);
    game.addPlayer("Jan");
    game.addPlayer("Maria");
    game.addPlayer("Zygmunt");
    game.run();
}
