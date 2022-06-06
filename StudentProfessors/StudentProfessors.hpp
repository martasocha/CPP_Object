#pragma once
#include<string>

class Student;

class Professors
{
	Student& student;
	std::string name;
	int numOfProfessors = 5;
public:
	Professors(Student& student);
	//void setNames(std::string* names);
	void receiveEmail(std::string emailCopy);

};

class Student
{
	Professors* professors;
	std::string name;
public:
	void setStudentName(std::string name);
	void setProfessors(Professors professors);
	void setProf(Professors* professors);
	void sendEmailToProfessors();

};