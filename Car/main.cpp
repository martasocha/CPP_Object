#include <iostream>
#include "Car.hpp"

int main()
{
    std::cout << "Zad 4.3" << std::endl;
    Car::Engine car1;

    Car::Engine::EngineType type = Car::Engine::EngineType::Diesel;
    car1.changeOil(type);
    car1.carService(type);

}
