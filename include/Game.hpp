#pragma once
#include <vector>
#include "Player.hpp"
#include "Board.hpp"
#include "Dies.hpp"
#include <algorithm>
#include <memory>

class Game
{
public:
    void run();
    void addPlayer(std::unique_ptr<Player> player);
    Game(Board& board, int numberOfRounds, Dies& dies);
private:
    void playRound();
    std::string findWinnerName();
    int countActivePlayers();

    Board m_board;
    Dies m_dies;
    std::vector<std::unique_ptr<Player>> m_players;
    int m_numberOfRounds;
};
