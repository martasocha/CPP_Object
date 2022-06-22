// Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicles.hpp"


Vehicle1::Vehicle1()
{
	this->lastDrives = new int[4];
	//lastDrives = new int[4];
}

Vehicle1::~Vehicle1()
{
	delete[] lastDrives;
}

Bus::Bus()
{
}

Bus::~Bus()
{
	std::cout << "Destruktor Bus" << std::endl;
}

void Bus::drive()
{
	*(lastDrives + i) = 100;
	i++;
}


Bicycle::Bicycle()
{
}

void Bicycle::drive()
{
	*(lastDrives + i) = 50;
	i++;
}

