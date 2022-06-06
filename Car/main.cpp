#include <iostream>
#include "Car.hpp"

int main()
{
    std::cout << "Zad 4.3" << std::endl;
    Car car1(EngineType::Diesel);

    car1.carService();
    car1.changeOil();
    

}
