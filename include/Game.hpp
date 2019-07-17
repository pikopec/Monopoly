#pragma once
#include <vector>
#include "Board.hpp"
#include "Player.hpp"
#include <algorithm>

class Game
{
public:
    void run();
    void addPlayer(std::string name);
    void removeBancrupts();
    Game(Board board, int numberOfRounds);
private:
    bool winConditionCheck();
    Board m_board;
    std::vector<Player> m_players;
    int m_numberOfRounds;
};
