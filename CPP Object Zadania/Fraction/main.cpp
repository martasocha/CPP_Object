#include <iostream>
#include "Fraction.hpp"

int main()
{
	Fraction a(1, 2), b(2, 3);
	Fraction c = a * b;
	std::cout << c;
}