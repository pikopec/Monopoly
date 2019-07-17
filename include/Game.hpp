#pragma once
#include <vector>
#include "Player.hpp"
#include "Board.hpp"
#include <algorithm>

class Game
{
public:
    void run();
    void addPlayer(std::string name);
    void removeBancrupts();
    Game(Board board, int numberOfRounds);
private:
    void playRound();
    bool winConditionCheck();
    Board m_board;
    std::vector<Player> m_players;
    int m_numberOfRounds;
};
