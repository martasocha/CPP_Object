#pragma once

class MyClass //tak jakby wprowadzic nowy typ: nowy int, nowy double
{
    int variable = 42; //private by default //obiek
public:
    //akcesor (getter), który zwraca nam wartosc zmiennej variable
    // chowamy zmienna variable - OOP principle
    // ale metoda jest publiczna i daje dam dostêp do schowanej
    int getVariable(); //metoda
    void setVariable(int param); //nowa metoda, nic nie zwraca, ustawiamy wartosc z zewnatrz
};
