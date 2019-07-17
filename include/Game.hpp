#pragma once
#include <vector>
#include "Board.hpp"
#include "Player.hpp"

class Game
{
public:
    void run();
    void addPlayer(std::string name);
    void removeBancrupts();
private:
    Board m_board;
    std::vector<Player> m_players;
};
