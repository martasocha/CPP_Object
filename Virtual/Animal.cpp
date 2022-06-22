#include <iostream>
#include "Animal.hpp"


Cat::Cat(std::string _name) : Mammal(_name)
{
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor" << std::endl;
}

//Dog(std::string _name = "Reksio") : Mammal(_name){} - konstruktor parametrowy ze stala

Dog::Dog() : Dog("Reksio") //mozna podac konstruktor naszej klasy
{
}

Dog::Dog(std::string _name) : Mammal(_name)
{
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor" << std::endl;
}

Mammal::Mammal()
{
}

Mammal::Mammal(std::string _name) : Animal(_name)
{
}


Mammal::~Mammal()
{
	std::cout << "Mammal deconstructor" << std::endl;
}


Animal::Animal()
{
}

Animal::Animal(std::string _name) : name(_name)
{
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor" << std::endl;
}

std::string Animal::getName()
{
	return name;
}

void Animal::roar()
{
	std::cout << "Animal roar" << std::endl;
}

void Animal::sleep()
{
	std::cout << "Animal sleep" << std::endl;
}

void Lion::roar()
{
	std::cout << "Lion roar" << std::endl;
}

void Lion::feast()
{
	std::cout << "Lion feast" << std::endl;
}
