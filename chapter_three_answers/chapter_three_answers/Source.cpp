#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;

int QuestionOne() 
{

	// Improve Word Jumble with a score system.

	// All the words and hints in a psuedo-table
	// A 2D array as the contents and the enum as table headers achieves this

	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"gap", "Mind the ___!"},
		{"jumble", "What you are playing now."},
		{"messy", "Your room might be like this if you don't take care of it."},
		{"door", "You'll need it to get out of a building."},
		{"impatient", "Are we there yet?"}

	};

	// Picking a random word

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice][WORD];
	string hint = WORDS[choice][HINT];

	// Jumble the word by assigning a random index to every letter in the word
	// Swaps characters between two random characters in the word

	string jumbled = word;

		for (int i = 0; i < jumbled.length(); ++i) 
		{
			int index1 = (rand() % jumbled.length());
			int index2 = (rand() % jumbled.length());
			char temp = jumbled[index1];
			jumbled[index1] = jumbled[index2];
			jumbled[index2] = temp;
		}

	// Score system, points += word length for correct guess, points -= 1 for asking hint.

	int score = 0;

	string guess;
	string prompt = "What is the word? " + jumbled;

	// Give player options

	cout << "Welcome to Word Jumble: \n" << endl;
	cout << prompt << endl;
	cout << "Enter your guess to guess the word \n";
	cout << "Or you can enter 'hint' to get a hint \n";
	cout << "Or you can enter 'quit' to quit \n" << endl;

	cout << "Current score: " << to_string(score) << endl;
	cout << "Have a guess: ";
	cin >> guess;

	// Game loop while the user is not correct

	while ((guess != word) && (guess != "quit")) 
	{

		if (guess == "hint") 
		{
			cout << hint << endl;
			--score;
			cout << "Current score: " << to_string(score) << endl;
		}
		else 
		{
			cout << "Hmmm, incorrect. Try again." << endl;
			cout << "Current score: " << to_string(score) << endl;
		}

		cout << "Have a guess: ";
		cin >> guess;
	}

	// Congratulate player

	if (guess == word)
	{
		cout << "Well done! You guessed it." << endl;
		score += word.length();
		cout << "Current score: " << to_string(score) << endl;
	}

	cout << "Thanks for playing." << endl;
	
	return 0;
}

int QuestionTwo() 
{
	string phrase = "hello";
		for (int i = 0; i <= phrase.size(); ++i) 
		{
			cout << "Character at position " << i << " is: " << phrase[i] << endl;
		}
		return 0;

		// phrase.size() = 5, so for loop actually iterates six times as i starts at 0
		// Last iteration of the for loop displays blank character, as index is out of bounds with array
		// The operator "<=" in the loop is incorrect, replace with < instead
}

int QuestionThree()
{
	const int ROWS = 2;
	const int COLUMNS = 3;
	char board[COLUMNS][ROWS] = { {'0', 'X', '0'},
								  {' ', 'X', '0'} };
	// The constant COLUMNS presumes that there are three sub arrays, 
	// However when "board" is actually declared, the actual number of COLUMNS declared by "board" is two.
	// board[COLUMNS][ROWS] should be declared as board[ROWS][COLUMNS] instead, because the variable allocates space for two sub-arrays, 
	// and three elements in every sub array.
	// Note in C++ 2D arrays should be seen as arrays-of-arrays.
}

int main() 
{
	QuestionTwo();
	return 0;
}
	
