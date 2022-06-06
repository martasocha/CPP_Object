// Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Student.hpp"
#include <iostream>

Student::Student(int numOfGrades)
{
	grades_ptr = new int[numOfGrades];
	this->numOfGrades = numOfGrades;
	for (int i = 0; i < numOfGrades; ++i)
	{
		grades_ptr[i] = 0;
	}
}

Student::~Student()
{
	delete[] grades_ptr;
}

std::string Student::setPersonalData(std::string studentName, std::string studentSurname)
{
	name = studentName;
	surname = studentSurname;
	return name + " " + surname;
}


void Student::addGrade(int grade)
{
	for (int i = 0; i < numOfGrades; ++i)
	{
		if (grades_ptr[i] == 0)
		{
			grades_ptr[i] = grade;
			break;
		}
	}
}


double Student::showGradeAverage(int numOfGrades)
{
	double sum = 0;
	int n = 0;
	for (int i = 0; i < numOfGrades; ++i)
	{
		if (grades_ptr[i] != 0)
		{
			sum += grades_ptr[i];
			n++;
		}
		else
		{
			break;
		}
	}
	return sum / n;
}

//sudent.addGrade(5) - zakladam w kontruktorze ze mam 20 kratek w dzienniku i dorzucam kolejn¹ ocenê. Zmienna podawania w kontruktorze liczny ocen
