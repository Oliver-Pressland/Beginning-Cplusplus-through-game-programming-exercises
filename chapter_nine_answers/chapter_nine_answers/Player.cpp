#include "Player.h"

#include <iostream>
#include <string>

Player::Player(const std::string& name) :
    m_Name(name),
    m_pNext(0)
{}

std::ostream& operator<<(std::ostream& os, const Player& aPlayer);

std::string Player::GetName() const
{
    return m_Name;
}

Player* Player::GetNext() const
{
    return m_pNext;
}

void Player::SetNext(Player* next)
{
    m_pNext = next;
}

// Exercise 1: create overloaded function that sends Player to cout

std::ostream& operator<<(std::ostream& os, const Player& aPlayer)
{
    os << aPlayer.GetName() << std::endl;
    return os;
}