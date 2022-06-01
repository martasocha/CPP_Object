// CPP-Object.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "MyClass.hpp"

int MyClass::getVariable() //metoda
{
    return variable;
}

void MyClass::setVariable(int param) //nowa metoda, nic nie zwraca, ustawiamy wartosc z zewnatrz
{
    variable = param; //przypsianie wartosci do obiektu, poprzez parametr metody
}