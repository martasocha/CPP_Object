// ustawienie imienia oraz nazwiska
//• przekazanie 5 ocen z przedmiotu
//• wyliczenie œredniej

#pragma once
#include <string>

class Student {
	std::string name, surname;
	//int grade1, grade2, grade3, grade4, grade5;
	int grades[5] = { };
public:
	Student();
	std:: string setPersonalData(std::string studentName, std::string studentSurname);
	bool checkGrades(int tab[5]);
	void setGrades(int tab[5]);
	double showGradeAverage(int tab[5]);

};
