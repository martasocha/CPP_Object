#include "Student.hpp"
#include <iostream>

Student::Student()
{
}

std::string Student::setPersonalData(std::string studentName, std::string studentSurname)
{
	std::string personalData = "";
	name = studentName;
	surname = studentSurname;

	personalData = name + " " + surname;
	return personalData;
}

bool Student::checkGrades(int tab[5])
{
	for (int i = 1; i < 5; ++i)
	{
		if (tab[i] < 1 || tab[i] > 5)
		{
			return false;
		}
	}
	return true;
}


void Student::setGrades(int tab[5])
{
	for (int i = 1; i < 5; ++i)
	{
		grades[i] = tab[i];
	}
}


double Student::showGradeAverage(int tab[5])
{
	int sum = 0;
	int average = 0;
	for (int i = 0; i < 5; ++i)
	{
		sum += tab[i];
	}
	average = sum / 5;
	return average;
}

