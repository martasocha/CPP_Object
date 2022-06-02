#pragma once
#include<string>

class Student {
	std::string name, surname;
	int numOfGrades = 0;
	int grade = 0;
	int* grades_ptr = nullptr;
public:
	Student(int numOfGrades);
	~Student();
	void addGrade(int numOfGrades, int grade);
	double showGradeAverage(int numOfGrades);
	std::string setPersonalData(std::string studentName, std::string studentSurname);
	
};
