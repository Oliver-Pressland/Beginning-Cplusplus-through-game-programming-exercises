#include<iostream>
#include<string>
#include<vector>

using namespace std;

string Menu()
{
	// Print out a menu and giver the user a menu choice

	string opt;
	cout << "Welcome to Game Library: " << endl;
	cout << "Options: " << endl;
	cout << "A - add a game" << endl;
	cout << "R - remove a game" << endl;
	cout << "L - list all games" << endl;
	cout << "Q - quit" << endl;
	cout << "Choose an option: "; cin >> opt;

	return opt;
}

int QuestionOne() 
{
	// Introduction of vector for games and iterator

	vector<string> gamesList;
	vector<string>::iterator iter;
	string option;

	// Entering the game loop

	do
	{
		// Ask the user for an option

		option = Menu();
		cout << option << endl;

		if (option == "A")
		{
			// Take user input to add game to the list

			string addGame;
			cout << "Add game: ";
			cin >> addGame;
			gamesList.push_back(addGame);
		}

		else if (option == "R")
		{
			// Check if the list is empty first

			if (gamesList.empty())
			{
				cout << "Empty list, add game first" << endl;
			}

			// If not empty

			else 
			{	
				// Prompt user which game to delete
				string delGame;
				cout << "Remove game: ";
				cin >> delGame;

				// Find element in vector with user input

				iter = find(gamesList.begin(), gamesList.end(), delGame);

				// Does value exist?

				if (iter != gamesList.end())
				{
					gamesList.erase(iter);
				}

				// If not?

				else
				{
					cout << "Not found" << endl;
				}
			}
		}

		else if (option == "L")
		{

			// Cannot print a list with nothing inside

			if (gamesList.empty())
			{
				cout << "Empty list, add game first" << endl;
			}
			
			else
			{	
				
				// Use the iterator to print reference to the list

				for (iter = gamesList.begin(); iter != gamesList.end(); ++iter)
				{
					cout << *iter << endl;
				}
			}
		}

		// Ensure no invalid choices are made

		else
		{
			cout << "Incorrect choice" << endl;
		}
	} while (option != "Q");

	return 0;
}

int QuestionTwo()
{
	vector<int> scores = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int>::iterator iter;

	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		// iter++;
		// cout << *iter << endl;

		// This does not increment each element by one because the code is incrementing the
		// iterator itself.

		// To increment each element by one, a reference must be made to which element the
		// iterator is iterating over. Then perform the operation using the referenced value. 

		//So change code to this instead:

		*iter += 1;
		cout << *iter << endl;
	}

	return 0;
}

int QuestionThree()
{
	// Word Jumble

	// Set COLUMNS = {WORD, HINT, NUM_FIELDS}
	// Set NUM_ROWS = 5
	// Set WORDS (table of words, hints with key pair) = 2D array (NUM_ROWS x COLUMNS)

	// Pick random key pair from table
	// Set word = WORDS[key][WORD]
	// Set hint = WORDS[key][HINT]

	// Set jumbled = word
	// for i to the end of jumbled
	//		Set random char 1 in jumbled
	//      Set random char 2 in jumbled
	//      Random char 1 = Random char 2
	//		Random char 2 = Random char 1

	// Welcome the player
	// Do
	// 	    Set choice = input (User types hint for a hint, types the word to guess or types quit to quit)
	//		If choice is hint
	//			print hint
	//		Else
	//			print "That's not it"
	// While choice is not the word and choice is not quit
	//
	// If choice is the word
	//		print "well done!"
	// print "Thanks for playing!"

	return 0;
}

int main()
{
	QuestionOne();
	return 0;
}