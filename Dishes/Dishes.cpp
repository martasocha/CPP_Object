#include <iostream>
#include "Dishes.hpp"


Dish::Dish(double _kcal) : kcal(_kcal)
{
}

double& Dish::getKcal()
{
	return kcal;
}


void Dish::eat()
{
}

bool Dish::isEmpty()
{
	if (kcal != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Soup::Soup(double _kcal) : Dish(_kcal)
{
}

void Soup::eat()
{
	double& kcal = getKcal();
	kcal -= 50;
	std::cout << "Jem zupe" << std::endl;
}

void Main::eat()
{
	double& kcal = getKcal();
	kcal -= 100;
}

Main::Main(double _kcal) : Dish(_kcal)
{
}
