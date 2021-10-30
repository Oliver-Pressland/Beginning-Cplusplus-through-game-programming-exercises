#include <iostream>
using namespace std;

// Exercise 3: what's wrong with the following code?

int main()
{
	int* pScore = new int;
	*pScore = 500;
	pScore = new int(1000);
	delete pScore;
	pScore = 0;

	// The variable pScore has been deleted
	// but the pointer pointing to pScore hasn't
	// this creates a dangling pointer.

	return 0;
}