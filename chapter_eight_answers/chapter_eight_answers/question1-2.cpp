//Critter Caretaker
//Simulates caring for a virtual pet

#include <iostream>

using namespace std;

// Question 1 - Improve Critter Caretaker to enter unlisted menu choice, revealing hunger and boredom levels.
// Question 2 - Change Critter Caretaker to hint hunger and boredom.

class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);

    // Define public getter and setter variables

    int GetHunger() const;
    int GetBoredom() const;

private:
    int m_Hunger;
    int m_Boredom;

    int GetMood() const;
    void PassTime(int time = 1);

};

Critter::Critter(int hunger, int boredom) :
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

inline int Critter::GetMood() const
{
    return (m_Hunger + m_Boredom);
}

// Return hunger and boredom

inline int Critter::GetHunger() const
{
    return m_Hunger;
}

inline int Critter::GetBoredom() const
{
    return m_Boredom;
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    int hunger = GetHunger();
    int bored = GetBoredom();

    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy.\n";
    }

    // Express hunger and boredom
    
    if (hunger > 3)
    {
        cout << "I'm hungry.\n";
    }

    if (bored > 3)
    {
        cout << "I'm bored.\n";
    }

    PassTime();
}

void Critter::Eat(int food)
{
    cout << "Brruppp.\n";

    m_Hunger -= food;
    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }

    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }

    PassTime();
}

int nonmain()
{
    Critter crit;

    int choice = 1;  //start the critter off talking
    while (choice != 0)
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        case 4:
            cout << "Hunger level: " << crit.GetHunger() << "\n";
            cout << "Mood level: " << crit.GetBoredom() << "\n";
            break;
        default:
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    }

    return 0;
}