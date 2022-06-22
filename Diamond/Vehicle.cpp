#include "Vehicle.hpp"

Vehicle::Vehicle()
{
	std::cout << "Car constructor" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "Car deconstructor" << std::endl;
}

ElectricCar::ElectricCar()
{
	std::cout << "Electric car constructor" << std::endl;
}

ElectricCar::~ElectricCar()
{
	std::cout << "Electric car deconstructor" << std::endl;
}

void ElectricCar::drive()
{
	std::cout << "Car drives" << std::endl;
}

AutoTransmissionCar::AutoTransmissionCar()
{
	std::cout << "Auto transmision car constructor" << std::endl;
}

AutoTransmissionCar::~AutoTransmissionCar()
{
	std::cout << "Auto transmision car deconstructor" << std::endl;
}

Tesla::Tesla()
{
	std::cout << "Tesla constructor" << std::endl;
}

Tesla::~Tesla()
{
	std::cout << "Tesla deconstructor" << std::endl;
}
