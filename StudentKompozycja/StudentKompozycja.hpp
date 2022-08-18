#pragma once
#include <string>

class Student {

	class Adress {
	public:
		std::string street;
		int houseNo;
	};
	Adress adress;
public:
	Student(std::string street, int houseNo);
};