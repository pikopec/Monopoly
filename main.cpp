#include <iostream>
#include "Game.hpp"

int main()
{
    Board board;
    int numberOfRounds = 100;
    Game game(board, numberOfRounds);
    game.addPlayer("Jan");
    game.addPlayer("Maria");
    game.addPlayer("Zygmunt");
    game.run();
}
