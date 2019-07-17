#include "Game.hpp"
#include <iostream>


Game::Game(Board board, int numberOfRounds) : m_board(board), m_numberOfRounds(numberOfRounds) {}

void Game::run()
{
    std::cout << "Game started" << std::endl;
    auto currentPlayer = m_players.begin();
    while(not winConditionCheck())
    {

        currentPlayer->move(6); // todo losowanie


        currentPlayer++; // todo round
        removeBancrupts();
    }
}

void Game::addPlayer(std::string name)
{
    m_players.push_back(Player(name, 100, m_board.getStartingField()));
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
