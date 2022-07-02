#pragma once
#include<string>
enum class FormOfEmployment
{
	Contract,
	ContractOfMandate,
	ContractOfEmployment
};

//abstrakcyjna klasa - nie mozna tworzyc obiektow tej klasy
class Employee
{
protected:
	std::string name;
	std::string surname;
	FormOfEmployment form;
	double salary = 0;
	int hoursPerMonth = 0;

public:
	Employee(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	double calculateEmployerCost();
	double getEmployeeNetSalary(int hoursPerMonth);
	virtual bool isTeachingStaff() = 0;// = 0;
	std::string getName();
	std::string getSurname();

};

class Professor : public Employee
{
public:
	Professor(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	virtual bool isTeachingStaff();
};

class Lecturer : public Employee
{
public:
	Lecturer(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	virtual bool isTeachingStaff();
};

class Assistant : public Employee
{
public:
	Assistant(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	virtual bool isTeachingStaff();
};

class Keeper : public Employee
{
public:
	Keeper(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	virtual bool isTeachingStaff();
};

class Guard : public Employee
{
public:
	Guard(std::string _name, std::string _surname, FormOfEmployment _form, double _salary);
	virtual bool isTeachingStaff();
};

class University
{
	//static const int numOfStaff = 10;
	Employee** staff; // - nie mozemy jesli Employee jest abstrakcyjna klasa
	//Employee* employees = new Employee[100]; // rule of 3 bo destruktor konieczny, ale
	int count = 0;
	int maxStaffSize = 5;
	Employee** resizeArray();
	void copyElements(Employee** newStaff);

public:
	University();
	~University();
	double calculateEmployerCost();
	void printTeachingStaff();


	void printAllStaffNetIncomes(int hoursPerMonth);
	void add(Employee* object);
	Employee* getStaff() const;
};

std::ostream& operator<<(std::ostream& s, const University& u);