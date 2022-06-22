// Inheritence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Inheritence.hpp"



int BaseClass::getX()
{
    return x;
}

int DervedClass::getY()
{
    //int sum = y + z + getX(); // geter jest publiczny wiec dziala
    //int sum = y + z + x + hidden // nie dziala
    return y + z;
}

//int DervedClass::getX()
//{
//    return x;
//}

int DervedClass::getDerivedX()
{
    int sum = hiddenForOutside;
    return x;
}

int& DervedClass::getHiddenForOutside()
{
    return hiddenForOutside;
}


int main()
{
    BaseClass base;

    std::cout << base.getX() << " From base class" << std::endl;
    //base.getY( nie ma takiej metody bazowej    
    DervedClass derived;
    std::cout << derived.getX() << " From base class" << std::endl;
    std::cout << derived.getDerivedX() << " X From derived class" << std::endl;
    std::cout << derived.getY() << " From base class" << std::endl;
    std::cout << derived.getHiddenForOutside() << " From base class" << std::endl;
    int& hidden = derived.getHiddenForOutside();
    hidden = 77;
    std::cout << derived.getHiddenForOutside() << " hidden for outside" << std::endl;
    // base.hiddenFromOutside; // brak dostepu
    // derived.hiddenFromOutside; 
}
