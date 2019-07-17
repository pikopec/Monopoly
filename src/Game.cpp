#include "Game.hpp"
#include <iostream>


Game::Game(Board board, int numberOfRounds) : m_board(board), m_numberOfRounds(numberOfRounds) {}

void Game::run()
{
    std::cout << "Game started" << std::endl;
    auto currentPlayer = m_players.begin();
    for(int round = 0; round <= m_numberOfRounds; round++)
    {
        std::cout << "round " << round << std::endl;

        for(auto& player : m_players)
        {
            std::cout << "Player " << player.getName() << ", money: " << player.getMoney() << std::endl;
            player.move(6);
            if(m_players.size() == 1)
            {
                std::cout << "GAME OVER, winner is player " << m_players[0].getName();
                return;
            }

        }
        //currentPlayer->move(6); // todo losowanie


        //currentPlayer++; // todo round
        removeBancrupts();
    }
}

void Game::addPlayer(std::string name)
{
    m_players.push_back(Player(name, 100, &m_board.getStartingField()));
}

void Game::removeBancrupts()
{
    //std::remove_if(m_players.begin(), m_players.end(), [](const auto& player){
        //return player.isBancrupt();
     //   return true;
   // });
    //std::for_each
}

bool Game::winConditionCheck()
{
    return false; // todo
}
