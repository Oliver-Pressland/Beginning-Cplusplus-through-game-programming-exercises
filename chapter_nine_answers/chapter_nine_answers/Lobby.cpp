#include "Lobby.h"

#include <iostream>
#include <string>

Lobby::Lobby() :
    m_pHead(0)
{}

Lobby::~Lobby()
{
    Clear();
}

void Lobby::AddPlayer()
{
    //create a new player node
    std::cout << "Please enter the name of the new player: ";
    std::string name;
    std::cin >> name;
    Player* pNewPlayer = new Player(name);

    //if list is empty, make head of list this new player and tail of list the current player
    if (m_pHead == 0)
    {
        m_pHead = pNewPlayer;
        m_pTail = m_pHead;
    }
    //otherwise find the end of the list and add the player there
    else
    {
        // Exercise 2: create efficient player adding function by adding a linked list tail
        Player* pIter = m_pTail;
        pIter->SetNext(pNewPlayer);
    }
}

void Lobby::RemovePlayer()
{
    if (m_pHead == 0)
    {
        std::cout << "The game lobby is empty.  No one to remove!\n";
    }
    else
    {
        Player* pTemp = m_pHead;
        m_pHead = m_pHead->GetNext();
        delete pTemp;
    }
}

void Lobby::Clear()
{
    while (m_pHead != 0)
    {
        RemovePlayer();
    }
}

std::ostream& operator<<(std::ostream& os, const Lobby& aLobby)
{
    Player* pIter = aLobby.m_pHead;

    os << "\nHere's who's in the game lobby:\n";
    if (pIter == 0)
    {
        os << "The lobby is empty.\n";
    }
    else
    {
        while (pIter != 0)
        {
            os << *pIter << std::endl;
            pIter = pIter->GetNext();
        }
    }

    return os;
}