#include "Knapsack.hpp"
#include <iostream>

int main()
{
	//Backpack backpack
	//Robber robber(30, backpack);
	Robber robber(30); // inicjalizacje
	Shop shop;
	std::cout << shop;
	std::cout << robber;
	robber.robMostEfficient(shop);
	//robber.robWhatever(shop);
	std::cout << "Value of backpack: " << robber.getValue() << std::endl;
	std::cout << shop;
	std::cout << robber;

	return 0;
}

