#include <iostream>
#include "Game.hpp"
#include "RealPlayer.hpp"
#include "AllInPlayer.hpp"
#include "RandomPlayer.hpp"

int main()
{
    Board board;
    Dies dies;
    dies.addDie(new NormalDie(6));
    dies.addDie(new NormalDie(6));
    int numberOfRounds = 100;
    Game game(board, numberOfRounds, dies);
    game.addPlayer(std::make_unique<RandomPlayer>("Jan", 100));
    game.addPlayer(std::make_unique<AllInPlayer>("Maria", 100));
    game.addPlayer(std::make_unique<RealPlayer>("Zygmunt", 100));
    game.run();
}
