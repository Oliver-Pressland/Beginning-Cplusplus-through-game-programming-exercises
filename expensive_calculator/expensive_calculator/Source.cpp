#include <iostream>
#include <string>

int main() {
	int rint1 = rand() % 10;
	int rint2 = rand() % 10;

	std::cout << "Random int 1: " << rint1 << std::endl;
	std::cout << "Random int 2: " << rint2 << std::endl;

	std::string add1 = std::to_string(rint1) + " + " + std::to_string(rint2) + " = ";
	std::string sub1 = std::to_string(rint1) + " - " + std::to_string(rint2) + " = ";
	std::string mul1 = std::to_string(rint1) + " x " + std::to_string(rint2) + " = ";
	std::string div1 = std::to_string(rint1) + " / " + std::to_string(rint2) + " = ";

	std::cout << add1 << rint1 + rint2 << std::endl;
	std::cout << sub1 << rint1 - rint2 << std::endl;
	std::cout << mul1 << rint1 * rint2 << std::endl;
	std::cout << div1 << rint1 / rint2 << std::endl;
	// Generate random ints for calculator

	return 0;
}