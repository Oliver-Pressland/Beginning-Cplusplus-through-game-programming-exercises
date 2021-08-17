#include<iostream>
#include<string>

int questionOne()
{
	// Using a pointer to a pointer to a string
	// Call the size member function of string, from the pointer to the pointer

	std::string str = "I'm being pointed to";
	std::string* pStr = &str;
	std::string** ppStr = &pStr;

	return (**ppStr).size();
}

std::string askText(std::string prompt);
int askNumber(std::string prompt);

// Header parameter takes pointers instead of creating an out of scope variable for efficiency
// Pointers are constant so function does not change the argument variables

void tellStory(const std::string* name, const std::string* noun, const int* number, const std::string* bodyPart, const std::string* verb);

// Program tells a story by asking for five items

int questionTwo()
{
	std::cout << "Welcome to Mad Lib.\n\n";
	std::cout << "Answer the following questions to help create a new story.\n";

	std::string name = askText("Please enter a name: ");
	std::string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	std::string bodyPart = askText("Please enter a body part: ");
	std::string verb = askText("Please enter a verb: ");

	tellStory(&name, &noun, &number, &bodyPart, &verb);

	return 0;
}

std::string askText(std::string prompt)
{
    std::string text;
    std::cout << prompt;
    std::cin >> text;
    return text;
}

int askNumber(std::string prompt)
{
    int num;
    std::cout << prompt;
    std::cin >> num;
    return num;
}

void tellStory(const std::string* name, const std::string* noun, const int* number, const std::string* bodyPart, const std::string* verb)
{
    std::cout << "\nHere's your story:\n";
    std::cout << "The famous explorer ";
    std::cout << *name;
    std::cout << " had nearly given up a life-long quest to find\n";
    std::cout << "The Lost City of ";
    std::cout << *noun;
    std::cout << " when one day, the ";
    std::cout << *noun;
    std::cout << " found the explorer.\n";
    std::cout << "Surrounded by ";
    std::cout << *number;
    std::cout << " " << *noun;
    std::cout << ", a tear came to ";
    std::cout << *name << "'s ";
    std::cout << *bodyPart << ".\n";
    std::cout << "After all this time, the quest was finally over. ";
    std::cout << "And then, the ";
    std::cout << *noun << "\n";
    std::cout << "promptly devoured ";
    std::cout << *name << ". ";
    std::cout << "The moral of the story? Be careful what you ";
    std::cout << *verb;
    std::cout << " for.";
}

int questionThree()
{
    // Will all three memory addresses be the same?

    int a = 10;
    int& b = a;
    int* c = &b;

    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    std::cout << &(*c) << std::endl;

    return 0;

    // Yes.
    // 
    // "a" is an integer variable that has been allocated memory.
    // "b" is a reference to the existing variable "a", 
    // and as references are not new copies of variables but are aliases of existing variables,
    // "b" will have the same memory address as "a".
    // 
    // "c" is a pointer to "b", which is a reference to "a", 
    // and thus returns the same memory address if a pointer was created to point to "a".
    // "&(*c)" means "return the memory address of the variable that deferences a pointer c".
    // This then returns the memory address of the reference "b", which is the memory address of "a", because " *c" points to "b".
}

int main()
{
    questionThree();

    return 0;
}
	