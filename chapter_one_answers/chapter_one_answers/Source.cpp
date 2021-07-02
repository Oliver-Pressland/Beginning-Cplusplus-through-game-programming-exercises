#include <iostream>
#include <string>

int QuestionOne() {

	// Question one: six legal variable names, three good choices, three bad choices.

	int variableOne;
	int variable_two;
	int var_3;

	// variableOne is a good choice, uses camel case naming conventions 
	// which are commonly accepted in OOP programming languages.

	// variable_two is also a good choice, uses underscore naming conventions
	// normally used in Python and scripting languages.

	// var_3, despite being shortened can still be deciphered what the variable
	// represents and adheres to naming conventions.

	int Variablefour;
	int ThisVariableIsTheFifthVariable;
	int v6;

	// Variablefour is not a good choice, does not adhere to naming conventions
	// second word not capitalised means it is difficult to read

	// ThisVariableIsTheFifthVariable is too long, it is inefficient and
	// easy to create typos

	// v6 is too short, cannot tell what this variable represents

	return 0;
}

int QuestionTwo() {

	std::cout << "Seven divided by three is " << 7 / 3 << std::endl;
	std::cout << "Seven divided by three is " << 7.0 / 3 << std::endl;
	std::cout << "Seven divided by three is " << 7.0 / 3.0 << std::endl;

	// Answer to line 1 is 2, because integer calculation outputs integer result, cutting out the decimal
	// Answer to line 2 and 3 is 2.33333 because the addition of a floating number generates a floating number result

	return 0;
}

int QuestionThree() {

	// Write a program that gets three game scores and calculates an average

	int scores[3];

	// Array of size three to assign scores

	for (int i = 0; i < 3; i++) {
		int score;
		std::cout << "Enter a score " << std::to_string(i) << std::endl;
		std::cin >> score;
		scores[i] = score;
	}

	// Retrieve the three scores from player

	int sum = 0;
	int average = 0;

	// Pre-assign variables for summation and average

	for (int i = 0; i < 3; i++) {
		sum = sum + scores[i];
		average = sum / 3.0;
	}

	// Calculate and print average

	std::cout << "The average is: " << average << std::endl;
	return 0;
}

int main() {
	QuestionThree();

	return 0;
}