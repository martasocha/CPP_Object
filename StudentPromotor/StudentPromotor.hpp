#pragma once
class Student;

class Promotor
{
	Student* student = nullptr;
	std::string name;

public:
	Promotor(Student* student);
	void setName(std::string name);
	void receiveEmail(std::string emailCopy);
	void sendEmailToStudent();

};

class Student
{
	Promotor* promotor = nullptr;
	std::string name;
public:
	void setName(std::string name);
	void setPromotor(Promotor* promotor);
	void sendEmailToPromotor();
	void receiveEmail(std::string emailCopy2);
};
