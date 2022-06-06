// StudentPromotor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StudentPromotor.hpp"


Promotor::Promotor(Student* student)
{
    this->student = student;
}

void Promotor::setName(std::string name)
{
    this->name=name;
}

void Promotor::receiveEmail(std::string emailCopy2)
{
    std::cout << "Promotor odebral maila: " << emailCopy2 << std::endl;
}

void Promotor::sendEmailToStudent()
{
    std::cout << "Promotor wysyla maila" << std::endl;
    student->receiveEmail("Prosze wyslac prace inzynierska");
}

void Student::setName(std::string name)
{
    this->name = name;
}

void Student::setPromotor(Promotor* promotor)
{
    this->promotor = promotor;
}

void Student::sendEmailToPromotor()
{
    std::cout << "Student wysyla maila " << std::endl;
    promotor->receiveEmail("Witam");
}

void Student::receiveEmail(std::string emailCopy)
{
    std::cout << "Student odebral maila: " << emailCopy << std::endl;
}
