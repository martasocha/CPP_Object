// Student5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student5.hpp"

//Student::Student(std::string street, int houseNo)
//{
//    adress._street = street;
//    adress._houseNo = houseNo;
//}

//Professor::Professor(std::string street, int houseNo)
//{
//    adress._street = street;
//    adress._houseNo = houseNo;
//}

Adress::Adress()
{
}

Adress::Adress(std::string street, int houseNo):
    _street(street), _houseNo(houseNo)
{
}

void Adress::setStreet(std::string street)
{
    this->_street = street;
}

void Adress::setHouseNo(int houseNo)
{
    this->_houseNo = houseNo;
}

std::string Adress::getStreet()
{
    return _street;
}

int Adress::getHouseNo()
{
    return _houseNo;
}


Student::Student(Adress& adress)
{
    this->adress = adress;
}

Professor::Professor(Adress& adress)
{
    this->adress = adress;
}
