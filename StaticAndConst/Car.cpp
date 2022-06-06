#include "car.hpp"

int Car::count = 0;

Car::Car()
{
	count++;
}

int Car::getCount()
{
	return count;
}
