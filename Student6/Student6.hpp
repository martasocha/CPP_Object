#pragma once
#include <iostream>
class Promoter{};
class Student2 {};

class Promoter {
	std::string name;
	std::string surname;
	Student2 promoter;
public:
	Promoter(std::string stuName, std::string stuSurname);
};

class Student2 {
	std::string name;
	std::string surname;
	Promoter student;
public:
	Student2(std::string promName, std::string promSurname);
};

