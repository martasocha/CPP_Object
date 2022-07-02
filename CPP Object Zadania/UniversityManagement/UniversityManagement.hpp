#pragma once
#include<string>
#include "EmployeeList.hpp"


class University
{
	//Employee* employees = new Employee[100]; // nie mozemy jesli Employee jest abstrakcyjna klasa i/lub nie ma bezparametrowego konstruktora
	/*Employee** staff; */
	EmployeeList list;
public:
	double calculateEmployerCost();
	void printTeachingStaff();
	void printAllStaffNetIncomes(int hoursInMonth);
	void add(Employee* object);
};
class Student;
class Course;

class CourseList
{
	Course** courses;
	Course** resizeArray();
	void copyElements(Course** target);
	int count = 0;
	int maxStaffSize = 1;
public:
	CourseList();
	virtual ~CourseList();
	void add(Course* object);
	Course* get(int index);
	int getCount();
};

class StudentList
{
	Student** students;
	Student** resizeArray();
	void copyElements(Student** target);
	int count = 0;
	int maxStaffSize = 1;
public:
	StudentList();
	virtual ~StudentList();
	void add(Student* object);
	Student* get(int index);
	int getCount();
};

class Course
{
	std::string name;
	Employee* tutor; // EducationalEmployee jako klasa posrednia
	//tylko kurs wie kto go prowadzi, prowadzacy nie wie jakie prowadz kursy
	StudentList list;
public:
	Course(std::string _name);
	void setTutor(Employee* tutor); // sprawdzic czy jest z kady dydatktycznej
	void addStudent(Student* student);
	void printAllStudents();
	std::string getName();
};

class Student
{
	std::string firstName;
	std::string secondName;
	//Course** courses = new Course* [10];
	CourseList list;
public:
	void signIn(Course* course);
	//void resign(Course* course);
	void printAllCourses();
	std::string getFirstName();
	std::string getSecondName();
};
