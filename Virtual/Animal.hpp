#pragma once
#include<string>

class Animal {
	std::string name;
public:
	Animal();
	Animal(std::string _name);
	~Animal();
	std::string getName();
	void roar();
	void sleep();
};

class Lion : public Animal
{
public:
	void roar();
	void feast();
};

class Mammal : public Animal {
public:
	Mammal();
	Mammal(std::string _name);
	~Mammal();
};

class Dog : public Mammal {
public:
	//Dog(std::string _name = "Reksio")
	Dog();
	Dog(std::string _name);
	~Dog();
};

class Cat : public Mammal {
public:
	
	Cat(std::string _name);
	~Cat();
};