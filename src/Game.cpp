#include "Game.hpp"
#include <iostream>


Game::Game(Board board, int numberOfRounds, Dies dies) : m_board(board), m_numberOfRounds(numberOfRounds), m_dies(dies) {}

void Game::run()
{
    std::cout << "Game started" << std::endl;
    auto currentPlayer = m_players.begin();
    for(int round = 0; round <= m_numberOfRounds && m_players.size() > 1; round++)
    {
        std::cout << "round " << round << std::endl;
        playRound();
    }
}

void Game::playRound()
{
    int numberOfActivePlayers = m_players.size();
    for(auto& player : m_players)
    {
        std::cout << "Player " << player->getName() << ", money: " << player->getMoney() << std::endl;

        player->move(m_dies.roll());
        if(player->isBancrupt())
            --numberOfActivePlayers;
        if(numberOfActivePlayers == 1)
        {
            removeBancrupts();
            std::cout << "GAME OVER, winner is player " << m_players[0]->getName();
            return;
        }
    }
    removeBancrupts();
}

void Game::addPlayer(std::unique_ptr<Player> player)
{
    player->setField(&m_board.getStartingField());
    m_players.push_back(std::move(player));
}

void Game::removeBancrupts()
{
    m_players.erase(std::remove_if(m_players.begin(), m_players.end(), [](const auto& player){
        return player->isBancrupt();
    }), m_players.end());
    std::cout << "player size: " << m_players.size() << std::endl;
}

bool Game::winConditionCheck()
{
    return false; // todo
}
