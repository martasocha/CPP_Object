// Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.hpp"


void Car::Engine::changeOil(EngineType type)
{

    if (type == Car::Engine::EngineType::Diesel)
    {
        std::cout << "The oil was changed in a diesel engine" << std::endl;
    }
    else if (type == Car::Engine::EngineType::Petrol)
    {
        std::cout << "The oil was changed in a gasoline engine" << std::endl;
    }
    else if (type == Car::Engine::EngineType::Gas)
    {
        std::cout << "The oil was changed in a gas engine" << std::endl;
    }
}

void Car::Engine::carService(EngineType type)
{
    if (type == Car::Engine::EngineType::Diesel)
    {
        std::cout << "The diesel car is in the service" << std::endl;
    }
    else if (type == Car::Engine::EngineType::Petrol)
    {
        std::cout << "The petrol car is in the service" << std::endl;
    }
    else if (type == Car::Engine::EngineType::Gas)
    {
        std::cout << "The gas car is in the service" << std::endl;
    }
}
