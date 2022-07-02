#pragma once
#include <iostream>
#include "University.hpp"

Employee** University::resizeArray()
{
	maxStaffSize *= 2;
	Employee** newStaff = new Employee*[maxStaffSize];
	return newStaff;
}

void University::copyElements(Employee** newStaff)
{
	for (int i = 0; i < count; ++i)
	{
		newStaff[i] = staff[i];
	}
}

University::University()
{
	staff = new Employee*[maxStaffSize];
}

University::~University()
{
	delete[] staff;
}

double University::calculateEmployerCost()
{
	double sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += staff[i]->calculateEmployerCost();
	}
	return sum;
}

void University::printTeachingStaff()
{
	for (int i = 0; i < count; ++i)
	{
		if (staff[i]->isTeachingStaff())
			std::cout << staff[i]->getName() << " " << staff[i]->getSurname() << std::endl;
	}
}

void University::printAllStaffNetIncomes(int hoursPerMonth)
{
	for (int i = 0; i < count; ++i)
	{
		std::cout << staff[i]->getName() << " - " << staff[i]->getSurname() << " - " << staff[i]->getEmployeeNetSalary(hoursPerMonth) << std::endl;
	}

}

void University::add(Employee* object)
{
	if (count == maxStaffSize)
	{
		Employee** newStaff = resizeArray(); // tworzymy dwukrotnie szersza tablice
		copyElements(newStaff); //przepisac wszytsko miedyz staff a target
		delete[] staff;
		//staff = nullptr;
		staff = newStaff;
	}
	staff[count] = object;
	++count;
}

Employee* University::getStaff() const
{
	return (Employee*)staff;
}


Employee::Employee(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : name(_name), surname(_surname), form(_form), salary(_salary)
{
}

double Employee::calculateEmployerCost()
{
	double employerCost = 0;

	switch (form)
	{
	case FormOfEmployment::Contract:
		employerCost = (salary * hoursPerMonth) + 0, 23 * (salary * hoursPerMonth);
		break;
	case FormOfEmployment::ContractOfEmployment:
		employerCost = salary;
		break;
	case FormOfEmployment::ContractOfMandate:
		employerCost = salary + 0, 15 * salary;
	}
	return employerCost;
}

double Employee::getEmployeeNetSalary(int hoursPerMonth)
{
	double pensionInsurance = 0.15;
	double healthInsurance = 0.12;
	double netSalary;

	switch (form)
	{
	case FormOfEmployment::Contract:
		netSalary = salary - (pensionInsurance * (salary*hoursPerMonth)) - (healthInsurance * (salary*hoursPerMonth));
		break;
	case FormOfEmployment::ContractOfEmployment:
		netSalary = salary - (pensionInsurance * salary) - (healthInsurance * salary);
		break;
	case FormOfEmployment::ContractOfMandate:
		netSalary = salary - (pensionInsurance * salary) - (healthInsurance * salary);
	}


	return netSalary;
}

Professor::Professor(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : Employee(_name, _surname, _form, _salary)
{
}

bool Professor::isTeachingStaff()
{
	return true;
}

Lecturer::Lecturer(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : Employee(_name, _surname, _form, _salary)
{
}


bool Lecturer::isTeachingStaff()
{
	return true;
}

Assistant::Assistant(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : Employee(_name, _surname, _form, _salary)
{
}

bool Assistant::isTeachingStaff()
{
	return true;
}

Keeper::Keeper(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : Employee(_name, _surname, _form, _salary)
{
}

bool Keeper::isTeachingStaff()
{
	return false;
}

Guard::Guard(std::string _name, std::string _surname, FormOfEmployment _form, double _salary) : Employee(_name, _surname, _form, _salary)
{
}

bool Guard::isTeachingStaff()
{
	return false;
}

std::string Employee::getName()
{
	return name;
}

std::string Employee::getSurname()
{
	return surname;
}

//std::ostream& operator<<(std::ostream& s, const Employee& e)
//{
//	s << e.getName() << " " << e.getSurname() << std::endl;;
//
//	return s;
//}
