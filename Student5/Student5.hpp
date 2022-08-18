/// Agregacja

#pragma once
#include <string>

class Adress {
public:
	Adress();
	Adress(std::string street, int houseNo);
	std::string _street;
	int _houseNo;
	void setStreet(std::string street);
	void setHouseNo(int houseNo);
	std::string getStreet();
	int getHouseNo();
};


class Student {
	Adress adress;
public:
	Student(Adress& adress);
};

class Professor {
	Adress adress;
public:
	Professor(Adress& adress);
};