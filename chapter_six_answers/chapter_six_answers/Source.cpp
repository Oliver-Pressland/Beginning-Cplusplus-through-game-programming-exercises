#include<iostream>
#include<string>

std::string askText(std::string prompt);
int askNumber(std::string prompt);

// Header parameter takes references instead of creating an out of scope variable for efficiency
// References are constant so function does not change the argument variables

void tellStory(const std::string& name, const std::string& noun, const int& number, const std::string& bodyPart, const std::string& verb);

// Program tells a story by asking for five items

int questionOne()
{
    std::cout << "Welcome to Mad Lib.\n\n";
    std::cout << "Answer the following questions to help create a new story.\n";

    std::string name = askText("Please enter a name: ");
    std::string noun = askText("Please enter a plural noun: ");
    int number = askNumber("Please enter a number: ");
    std::string bodyPart = askText("Please enter a body part: ");
    std::string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

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

void tellStory(const std::string& name, const std::string& noun, const int& number, const std::string& bodyPart, const std::string& verb)
{
    std::cout << "\nHere's your story:\n";
    std::cout << "The famous explorer ";
    std::cout << name;
    std::cout << " had nearly given up a life-long quest to find\n";
    std::cout << "The Lost City of ";
    std::cout << noun;
    std::cout << " when one day, the ";
    std::cout << noun;
    std::cout << " found the explorer.\n";
    std::cout << "Surrounded by ";
    std::cout << number;
    std::cout << " " << noun;
    std::cout << ", a tear came to ";
    std::cout << name << "'s ";
    std::cout << bodyPart << ".\n";
    std::cout << "After all this time, the quest was finally over. ";
    std::cout << "And then, the ";
    std::cout << noun << "\n";
    std::cout << "promptly devoured ";
    std::cout << name << ". ";
    std::cout << "The moral of the story? Be careful what you ";
    std::cout << verb;
    std::cout << " for.";
}

int questionTwo()
{
    int score;
    score = 1000;
    int& rScore = score;
    return 0;

    // This code is illegal because you cannot make reference of type float to a variable that is assigned as int.
    // References to variables must be the same type as the variable itself.
}

int& questionThree(int number)
{
    int threeMore = number + 3;
    return threeMore;

    // The function returns a reference to a variable that exists out of scope.
    // Once the function is executed the variable that is being referenced will no longer exist.
}
int main()
{
    return 0;
}

