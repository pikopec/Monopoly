#include "Game.hpp"
#include <iostream>

void Game::run()
{
    std::cout << "Game started" << std::endl;
    auto& currentPlayer = m_players.begin();
    while(not winConditionCheck())
    {
        currentPlayer->move(m_board.getNextField());


        currentPlayer++; // todo round
        removeBancrupts();
    }
}

void Game::addPlayer(std::string name)
{
    m_players.push_back(Player(name, 100, m_board[0]));
}

void Game::removeBancrupts()
{
    std::remove_if(m_players.begin(), m_players.end(), [](const auto& player){
        return player.isBancrupt();
    });
    //std::for_each
}

bool winConditionCheck()
{
    return true; // todo
}
