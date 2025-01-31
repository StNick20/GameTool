#include <iostream>
#include "a.hpp"
#include "b.hpp"

int main()
{
	//create instances of a and b
	a A("Bob");
	b B("Fred");

	//print the names using the getters
	std::cout << "Name in class A: " << A.getName() << std::endl;
	std::cout << "Name in class B: " << B.getName() << std::endl;

	if (A.checkDreamFile())
		std::cout << "Assets files copied to runtime." << std::endl;

	return 0;
}