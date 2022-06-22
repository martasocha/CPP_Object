#pragma once
class Student1;

class Promotor
{
	Student1* student = nullptr;
	std::string name;
	
public:
	Promotor(Student1* student);
	~Promotor();
	void setName(std::string name);
	void receiveEmail(std::string emailCopy);
	void sendEmailToStudent();

};

class Student1
{
	Promotor* promotor = nullptr;
	std::string name;
	const int birthYear = 1988;
	int yearOfBirth;
public:
	Student1(int yearOfBirth);
	std::string getLanguage(int yearOfBirth);
	int getBirthYear() const;
	void setName(std::string name);
	void setPromotor(Promotor* promotor);
	void sendEmailToPromotor();
	void receiveEmail(std::string emailCopy2);
};
