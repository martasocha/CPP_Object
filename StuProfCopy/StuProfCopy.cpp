#include "StudentProfessors.hpp"
#include<iostream>
#include<string>


Professors::Professors(Student& _student) : student(_student)
{
}



void Professors::setNames(std::string name[])
{
	for (int i = 0; i < numOfProfessors; ++i)
	{
		this->name = name[i];
	}
}


void Professors::receiveEmail(std::string emailCopy)
{
	for (int i = 0; i < numOfProfessors; ++i)
	{
		std::cout << "Profesor " << name[i] << " odebral email" << emailCopy << std::endl;
	}
}

void Student::setStudentName(std::string name)
{
	this->name = name;
}

void Student::sendEmailToProfessors()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Student wyslal mail do profesora " << i << std::endl;
		professors->receiveEmail("Witam panie profesorze ");
	}
}

void Student::setProf(Professors* professors)
{
	for (int i = 0; i < 5; ++i)
	{
		this->professors = &professors[i];
	}
}
