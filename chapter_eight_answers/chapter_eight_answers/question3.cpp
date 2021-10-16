// Question 3 - find the design problem
#include <iostream>
class Critter2
{
public:
	int GetHunger() const { return m_Hunger; }
private:
	int m_Hunger;
};

int main()
{
	Critter2 crit;
	std::cout << crit.GetHunger() << std::endl;
	return 0;
}

// There is no constructor initialised which means that the object is not actually created
// This will mean 0xcccccccc == -858993460 (uninitialised memory) would be the result of the GetHunger method