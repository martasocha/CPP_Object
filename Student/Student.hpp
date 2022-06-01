#pragma once
#include<string>

class Student {
	std::string name, surname;
	int numOfGrades = 0;
	int grade = 0;
public:
	Student(int numOfGrades);
	int* addGrade(int numOfGrades, int* grades_ptr, int grade);
	double showGradeAverage(int numOfGrades, int* grades_ptr);
	std::string setPersonalData(std::string studentName, std::string studentSurname);
	int* setGrades(int numOfGrades);
};
