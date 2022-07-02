#pragma once
#include <iostream>
#include "UniversityManagement.hpp"

double University::calculateEmployerCost()
{
	double sum = 0;
	for (int i = 0; i < list.getCount(); ++i)
	{
		sum += list.get(i)->calculateEmployerCost();
	}
	return sum;
}

void University::printTeachingStaff()
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		//if(staff[i]->isTeachingStaff())
		if (list.get(i)->isTeachingStaff())
			std::cout << *list.get(i) << std::endl;
	}
}

void University::printAllStaffNetIncomes(int hoursInMonth)
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		std::cout << *list.get(i) << " - " << list.get(i)->getEmployeeNetSalary(hoursInMonth) << std::endl;
	}

}

void University::add(Employee* object)
{
	list.add(object);
}

void Student::signIn(Course* course)
{
	list.add(course);
	course->addStudent(this);
}

void Student::printAllCourses()
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		Course course = *list.get(i);
		std::cout << course.getName() << std::endl;
	}
}

std::string Student::getFirstName()
{
	return firstName;
}

std::string Student::getSecondName()
{
	return secondName;
}

Course::Course(std::string _name) : name(_name)
{
}

void Course::setTutor(Employee* tutor)
{
	if (tutor->isTeachingStaff())
	{
		this->tutor = tutor;
	}
}

void Course::addStudent(Student* student)
{
	list.add(student);
}

void Course::printAllStudents()
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		Student student = *list.get(i);
		std::cout << student.getFirstName() << " " << student.getSecondName() << std::endl;
	}
}

std::string Course::getName()
{
	return name;
}

void CourseList::add(Course* object)
{
	if (count == maxStaffSize)
	{
		Course** newCourses = resizeArray(); // tworzymy nowa 2-krotnie szersza tablice
		copyElements(newCourses); // kopiujemy elementy pomiedzy tablicami
		delete[] courses; // usuwamy stara tablice		
		courses = newCourses; // zapamietujemy nowa tablice - podobnie do //staff = nullptr;
	}
	courses[count] = object;
	++count;
}

Course* CourseList::get(int index)
{
	return courses[index];
}

int CourseList::getCount()
{
	return count;
}

//tworzymy nowa tablice
//aktualizujemy maxsize
//zwracamy ja
Course** CourseList::resizeArray()
{
	maxStaffSize *= 2;
	Course** newArray = new Course * [maxStaffSize];
	return newArray;
}

//przepisujemy wszystkie elementy (count)
//miedzy staff->target
void CourseList::copyElements(Course** target)
{
	for (int i = 0; i < count; i++)
	{
		target[i] = courses[i];
	}
}

CourseList::CourseList()
{
	courses = new Course * [maxStaffSize];
}

CourseList::~CourseList()
{
	delete[] courses;
}

void StudentList::add(Student* object)
{
	if (count == maxStaffSize)
	{
		Student** newStudents = resizeArray(); // tworzymy nowa 2-krotnie szersza tablice
		copyElements(newStudents); // kopiujemy elementy pomiedzy tablicami
		delete[] students; // usuwamy stara tablice		
		students = newStudents; // zapamietujemy nowa tablice - podobnie do //staff = nullptr;
	}
	students[count] = object;
	++count;
}

Student* StudentList::get(int index)
{
	return students[index];
}

int StudentList::getCount()
{
	return count;
}

Student** StudentList::resizeArray()
{
	maxStaffSize *= 2;
	Student** newArray = new Student * [maxStaffSize];
	return newArray;
}

//przepisujemy wszystkie elementy (count)
//miedzy staff->target
void StudentList::copyElements(Student** target)
{
	for (int i = 0; i < count; i++)
	{
		target[i] = students[i];
	}
}

StudentList::StudentList()
{
	students = new Student * [maxStaffSize];
}

StudentList::~StudentList()
{
	delete[] students;
}
