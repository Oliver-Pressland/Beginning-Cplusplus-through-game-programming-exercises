#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cctype>

int QuestionOne()
{
	int askNumber(int low = 1, int high = 9);
    return 0;
	// The parameter "high" must contain a default variable as "low" does.
}

void displayGameInfo(int guesses, std::string attempts)
{
    // Displays information at the start of every game loop

    std::cout << "You have made " << std::to_string(guesses) << " wrong guesses." << std::endl;
    std::cout << "You have guessed so far: " << attempts << std::endl;
}

char makeGuess()
{
    // Returns a user input as a character guess for a word

    char guess;
    std::cout << "Have a guess: ";
    std::cin >> guess;

    return guess;
}

char checkGuess(char g)
{   
    // Recurring function, called when the guess has already been made
    std::cout << "Already guessed" << std::endl;
    return makeGuess();
}

std::string makeUpdate(char g, std::string word, std::string attempts)
{
    // Function updates all correct guesses made and ignores incorrect ones
    // Updates user how many letters correctly guessed and align with the word

    for (int i = 0; i < word.length(); ++i)
    {
        if (word[i] == g)
        {
            attempts[i] = g;
        }
    }
    std::cout << "You have guessed the following correctly: " << attempts << std::endl;
    return attempts;
}

int hangMan()
{
    // Setting up the game, including max guesses, random word, attempts etc.

    const int MAX_WRONG = 8;

    std::vector<std::string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());

    const std::string THE_WORD = words[0];
    int wrongGuesses = 0; 
    std::string soFar(THE_WORD.length(), '-');
    std::string used = "";

    std::cout << "Welcome to Hangman. you have" << std::to_string(MAX_WRONG) <<" guesses. Good luck!\n";

    // Game loop starts and continues while the word isn't guessed and player hasn't made too many guesses
    
    while ((wrongGuesses < MAX_WRONG) && (soFar != THE_WORD))
    {
        displayGameInfo(wrongGuesses, used);
        char guess = toupper(makeGuess());

        while (used.find(guess) != std::string::npos)
        {
            guess = toupper(checkGuess(guess));
        }

        used += guess;

        if (THE_WORD.find(guess) != std::string::npos)
        {
            std::cout << "Guess is correct!" << std::endl;
            soFar = makeUpdate(guess, THE_WORD, soFar);
        }
        else
        {
            std::cout << "Wrong!" << std::endl;
            soFar = makeUpdate(guess, THE_WORD, soFar);
            wrongGuesses++;
        }
    }

    if (wrongGuesses == THE_WORD.size())
    {
        std::cout << "You've been hanged!" << std::endl;
    }
    else
    {
        std::cout << "Well done!" << std::endl;
    }

    return 0;
}

int number(int num, std::string prompt = "Enter a number please: ")
{
    std::cout << prompt;
    std::cin >> num;
    return num;
}

std::string number(std::string prompt = "Enter a number please: ")
{
    std::string num;
    std::cout << prompt;
    std::cin >> num;
    return num;
}

int QuestionThree()
{
    number(10, "Enter a number now: ");
    number(10);
    number("Enter a number now: ");
    number();

    // First line takes int of 10 and a custom prompt
    // Second line takes int of 10 but then prints default prompt
    // Third line uses overloaded "string" function because of different parameters
    // Fourth line uses overloaded function and default parameter

    return 0;
}

int main()
{
    QuestionThree();
}