// StudentPromotor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StudentPromotor.hpp"


Promotor::Promotor(Student1* student)
{
    this->student = student;
}

Promotor::~Promotor()
{
    std::cout << "Promotor umiera" << std::endl;
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

Student1::Student1(int yearOfBirth)
{
    this->yearOfBirth = yearOfBirth;
}

std::string Student1::getLanguage(int yearOfBirth)
{
    if (yearOfBirth < 1970)
    {
        return "rosyjski";
    }
    else
    {
        return "angielski";
    }
}

int Student1::getBirthYear() const
{
    return birthYear;
}

void Student1::setName(std::string name)
{
    this->name = name;
}

void Student1::setPromotor(Promotor* promotor)
{
    this->promotor = promotor;
}

void Student1::sendEmailToPromotor()
{
    std::cout << "Student wysyla maila " << std::endl;
    promotor->receiveEmail("Witam");
}

void Student1::receiveEmail(std::string emailCopy)
{
    std::cout << "Student odebral maila: " << emailCopy << std::endl;
}
