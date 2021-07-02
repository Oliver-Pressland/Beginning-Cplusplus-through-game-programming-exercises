#include <iostream>

int QuestionOne() {

	enum Difficulty {Easy = 1, Normal = 2, Hard = 3};

	std::cout << "Difficulty Levels \n \n";
	std::cout << "1 Easy \n";
	std::cout << "2 Normal \n";
	std::cout << "3 Hard \n";

	int option;

	std::cout << "Choose your difficulty: ";
	std::cin >> option;

	// Use the variable "option" to compare to numerical constants in enum

	switch(option){
	case Easy:
		std::cout << "You picked Easy, you wimp!";
		break;
	case Normal:
		std::cout << "You picked Normal, good luck!";
		break;
	case Hard:
		std::cout << "You picked Hard? I guess you like a challenge!";
		break;
	default:
		std::cout << "Wrong choice!";
		break;
	}
	return 0;
}

int QuestionTwo() {

	int x = 0;
	while (x) {
		++x;
		std::cout << x << std::endl;
	}
	return 0;

	// This loop does not run because while(x) only executes when x is true
	// When a value equals 0 it is assumed to be false in C++
}

int QuestionThree() {
	
	int playerNumber;

	std::cout << "Give me a number and I'll try to guess it: \n";
	std::cin >> playerNumber;

	// Ask for player input

	srand(static_cast<unsigned int>(time(0)));
	int compGuess = rand();

	// Computer makes the first initial guess

	while (compGuess != playerNumber) {
		std::cout << "Oops! I got it wrong. \n";
		compGuess = rand();

		// While loop runs when the computer's guess is incorrect
		// Runs a second guess afterwards
		// Stops when condition is no longer fulfilled
	}

	std::cout << "Hooray, I got it right!";

	return 0;
}

int main() {
	QuestionThree();
	return 0;
}