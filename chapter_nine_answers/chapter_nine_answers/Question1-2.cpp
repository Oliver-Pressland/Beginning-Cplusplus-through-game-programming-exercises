//Game Lobby
//Simulates a game lobby where players wait

#include "Player.h"
#include "Lobby.h"

#include <iostream>
#include <string>

int m()
{
    Lobby myLobby;
    int choice;

    do
    {
        std::cout << myLobby;
        std::cout << "\nGAME LOBBY\n";
        std::cout << "0 - Exit the program.\n";
        std::cout << "1 - Add a player to the lobby.\n";
        std::cout << "2 - Remove a player from the lobby.\n";
        std::cout << "3 - Clear the lobby.\n";
        std::cout << std::endl << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 0: std::cout << "Good-bye.\n"; break;
        case 1: myLobby.AddPlayer(); break;
        case 2: myLobby.RemovePlayer(); break;
        case 3: myLobby.Clear(); break;
        default: std::cout << "That was not a valid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
