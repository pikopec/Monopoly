#pragma once
#include <vector>
#include "Player.hpp"
#include "Board.hpp"
#include "Dies.hpp"
#include <algorithm>

class Game
{
public:
    void run();
    void addPlayer(std::string name);
    void removeBancrupts();
    Game(Board board, int numberOfRounds, Dies dies);
private:
    void playRound();
    bool winConditionCheck();
    Board m_board;
    Dies m_dies;
    std::vector<Player> m_players;
    int m_numberOfRounds;
};
