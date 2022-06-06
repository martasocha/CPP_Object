#include "Student6.hpp"
#include <string>
// Student6.cpp : This file contains the 'main' function. Program execution begins and ends there.

Student2::Student2(std::string promName, std::string promSurname)
{
	promoter.name = promName;
	promoter.surname = promSurname;
}

Promoter::Promoter(std::string stuName, std::string stuSurname)
{
	Student2::name = stuName;
	student.surname = stuSurname;
}
