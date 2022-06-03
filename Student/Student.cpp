// Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Student.hpp"
#include <iostream>

Student::Student(int numOfGrades)
{
	this->numOfGrades = numOfGrades;
	grades_ptr = new int[numOfGrades];
	for (int i = 0; i < numOfGrades; ++i)
	{
		grades_ptr[i] = 0;
	}
}

Student::~Student()
{
	delete[] grades_ptr;
	grades_ptr = nullptr;
}

std::string Student::setPersonalData(std::string studentName, std::string studentSurname)
{
	//std::string personalData = "";
	name = studentName;
	surname = studentSurname;

	//personalData = name + " " + surname;
	return name + " " + surname;
}

//int* Student::setGrades(int numOfGrades)
//{
//	//int* grades_ptr = nullptr;
//	
//	for (int i = 0; i < numOfGrades; ++i)
//	{
//		grades_ptr[i] = 0;
//	}
//	return grades_ptr;
//
//}


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
	double average = 0;
	double n = 0;
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
	average = sum / n;
	return average;
}

//sudent.addGrade(5) - zakladam w kontruktorze ze mam 20 kratek w dzienniku i dorzucam kolejn¹ ocenê. Zmienna podawania w kontruktorze liczny ocen
