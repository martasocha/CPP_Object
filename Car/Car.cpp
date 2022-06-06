// Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.hpp"

Car::Car(EngineType type)
{
    this->type = type;
}

void Car::changeOil()
{
    engine.changeOil();
}

void Car::carService()
{
    if (type == EngineType::Diesel)
    {
        std::cout << "The diesel car is in the service" << std::endl;
    }
    else if (type == EngineType::Petrol)
    {
        std::cout << "The petrol car is in the service" << std::endl;
    }
    else if (type == EngineType::Gas)
    {
        std::cout << "The gas car is in the service" << std::endl;
    }
}


void Car::Engine::changeOil()
{
    std::cout << "The oil was changled" << std::endl;
}
//void Car::Engine::changeOil()
//{
//
//    if (type == EngineType::Diesel)
//    {
//        std::cout << "The oil was changed in a diesel engine" << std::endl;
//    }
//    else if (type == EngineType::Petrol)
//    {
//        std::cout << "The oil was changed in a gasoline engine" << std::endl;
//    }
//    else if (type == EngineType::Gas)
//    {
//        std::cout << "The oil was changed in a gas engine" << std::endl;
//    }
//}

