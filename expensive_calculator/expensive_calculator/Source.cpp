#include <iostream>
#include <string>

int main() {
	int rint1 = rand() % 10;
	int rint2 = rand() % 10;

	std::cout << "Random int 1: " << rint1 << std::endl;
	std::cout << "Random int 2: " << rint2 << std::endl;

	// Generate random ints for calculator

	std::string add1 = std::to_string(rint1) + " + " + std::to_string(rint2) + " = ";
	std::string sub1 = std::to_string(rint1) + " - " + std::to_string(rint2) + " = ";
	std::string mul1 = std::to_string(rint1) + " x " + std::to_string(rint2) + " = ";
	std::string div1 = std::to_string(rint1) + " / " + std::to_string(rint2) + " = ";

	std::cout << add1 << rint1 + rint2 << std::endl;
	std::cout << sub1 << rint1 - rint2 << std::endl;
	std::cout << mul1 << rint1 * rint2 << std::endl;

	// Results as expected

	std::cout << div1 << rint1 / rint2 << std::endl;

	// Result unusual as integer division generates integer result (throws decimal away)

	double rdob1 = static_cast <double>(rand() % 10);
	double rdob2 = static_cast <double>(rand() % 10);

	std::cout << "Random double 1: " << rdob1 << std::endl;
	std::cout << "Random double 2: " << rdob2 << std::endl;

	// Generate random doubles
	
	std::string add2 = std::to_string(rdob1) + " + " + std::to_string(rdob2) + " = ";
	std::string sub2 = std::to_string(rdob1) + " - " + std::to_string(rdob2) + " = ";
	std::string mul2 = std::to_string(rdob1) + " x " + std::to_string(rdob2) + " = ";
	std::string div2 = std::to_string(rdob1) + " / " + std::to_string(rdob2) + " = ";

	std::cout << add2 << rdob1 + rdob2 << std::endl;
	std::cout << sub2 << rdob1 - rdob2 << std::endl;
	std::cout << mul2 << rdob1 * rdob2 << std::endl;
	std::cout << div2 << rdob1 / rdob2 << std::endl;

	// All results as expected
	// TODO: refactor as methods

	return 0;
}