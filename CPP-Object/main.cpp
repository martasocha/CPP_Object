#include <iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"
#include "Student.hpp"


void zad1()
{
    MyClass o1, o2; // pierwszy obiekt w klasie
    o1.setVariable(16);
    int value = o1.getVariable();
    int value2 = o2.getVariable();

    std::cout << value << " " << value2 << std::endl;

    //Rectangle rect; //brakuje bezparametrowego konstruktora
    //rect.setDimension(3, 7); // a co gdybysmy pobrali wymiary od uzytkownika
    //std::cout << "Rectangle: " << rect.getField() << " " << rect.getCircuit() << std::endl;

    //Rectangle rect2(5, 8);
    //std::cout << "Rectangle: "<< rect2.getField() << " " << rect2.getCircuit() << std::endl;

    Point ur
    {
    ur.x = 10,
    ur.y = 6,
    };

    Point ll
    {
    ll.x = 3,
    ll.y = 3,
    };
    Rectangle rect(ur,ll);
    std::cout << "Rectangle: " << rect.getField() << " " << rect.getCircuit() << std::endl;


    //Rectangle rect3(5, 8);
    //std::cout << "Rectangle: " << rect2.getField() << " " << rect2.getCircuit() << std::endl;
    
    // pobranie wymairow prostokata od uzytkownika
    //Rectangle rect3;
    std::cout << "Enter the dimension of the side a: ";
    int a1;
    std::cin >> a1;
    std::cout << "Enter the dimension of the side b: ";
    int b1;
    std::cin >> b1;
    //rect3.setDimension(a1, b1);
    //Rectangle rect3(a1, b1);
    //std::cout << "Rectangle: " << rect3.getField() << " " << rect3.getCircuit() << std::endl;
    
    Circle circ;
    circ.setDimension(5);
    std::cout << "Circle: " << circ.getField() << " " << circ.getCircuit() << std::endl;

    Circle2 circ2(5);
    std::cout << "Circle2: " << circ2.getField2() << " " << circ2.getCircuit2() << std::endl;


    //Triangle tria;
    //int a = 3;
    //int b = 4;
    //int c = 5;
    //int h = 4;
    //if (tria.checkDimensionsForTriangle(a,b,c))
    //{
    //    tria.setDimension(a, b, c, h);
    //    std::cout << "Triangle: " << tria.getField() << " " << tria.getCircuit() << std::endl;
    //}
    //else
    //{
    //    std::cout << "This triangle does not exist" << std::endl;
    //}
}

void zad2()
{
    Account prv(AccountType::savings);
    std::cout << "Bank number: " << prv.showBankNumber() << std::endl;

    prv.deposit(150); //150
    //prv.deposit(-10); // warto obsluzyc
    std::cout << "Account balance: " << prv.getBalance() << std::endl;
    int cash = prv.withdraw(100); //balance = 50, cash = 100
    std::cout << "Account balance: " << prv.getBalance() << std::endl;
    cash = prv.withdraw(100); //balnce = 0, cash = 50
    std::cout << "Account balance: " << prv.getBalance() << " " << cash << std::endl << std::endl;
    //int cash = prv.withdraw(-10); //warto obsluzyc

    std::cout << "Zad 4.2" << std::endl;
    Account businessAccount(AccountType::business);
    std::cout << "Monthly cost of account: " << businessAccount.showAccountCosts() << std::endl;

    Account privateAccount(AccountType::privat);
    std::cout << "Monthly cost of account: " << privateAccount.showAccountCosts() << std::endl;


}

void zad3()
{
    Student student1;
    std::cout << student1.setPersonalData("Jan", "Nowak") << std::endl;
    int grades[5] = { 2,3,4,5,5 };
    if (student1.checkGrades(grades) == 1)
    {
        student1.setGrades(grades);
        std::cout << "Average grade: " << student1.showGradeAverage(grades) << std::endl;
    }
    else
    {
        std::cout << "Error. Incorrect grades." << std::endl;
    }

    Student student2;
    std::cout << student2.setPersonalData("Karolina", "Kowalska") << std::endl;
    int grades2[5] = { 5,5,5,5,0 };
    if (student2.checkGrades(grades2) == 1)
    {
        student2.setGrades(grades2);
        std::cout << "Average grade: " << student2.showGradeAverage(grades2) << std::endl;
    }
    else
    {
        std::cout << "Error. Incorrect grades." << std::endl;
    }

}

int main()
{
    //std::cout << "Zadanie 2.1:" << std::endl;
    //zad1();

    //std::cout << std::endl;

    std::cout << "Zadanie 2.2:" << std::endl;
    zad2();

    //std::cout << std::endl;

    //std::cout << "Zadanie 2.3:" << std::endl;
    //zad3();
}
