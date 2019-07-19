#include "Game.hpp"
#include <iostream>


Game::Game(Board& board, int numberOfRounds, Dies& dies) : m_board(board), m_numberOfRounds(numberOfRounds), m_dies(dies) {}

void Game::run()
{
    std::cout << "Game started" << std::endl;
    for(int round = 0; round <= m_numberOfRounds && countActivePlayers() > 1; round++)
    {
        std::cout << "round " << round << std::endl;
        playRound();
    }
    std::cout << "GAME OVER, winner is player " << findWinnerName();
}

void Game::playRound()
{
    for(auto& player : m_players)
    {
        std::cout << "Player " << player->getName() << ", money: " << player->getMoney() << std::endl;
        player->move(m_dies.roll());
        if(countActivePlayers() == 1)
        {
            return;
        }
    }
}

void Game::addPlayer(std::unique_ptr<Player> player)
{
    player->setField(&m_board.getStartingField());
    m_players.push_back(std::move(player));
}

int Game::countActivePlayers()
{
    return std::count_if(m_players.begin(), m_players.end(), [](const auto& player){ return player->isActive(); });
}

std::string Game::findWinnerName()
{
    auto it = std::find_if(m_players.begin(), m_players.end(), [](const auto& player){ return player->isActive(); });
    return (*it)->getName();
}
