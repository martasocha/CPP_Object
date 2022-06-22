#include "Animal.hpp"
#include <iostream>

//void foo()
//{
//	Cat cat;
//}

void constructorChains()
{
	Dog dog;
	std::cout << dog.getName() << std::endl;
	//foo();
}

int main()
{
	Lion* lion = new Lion();
	lion->feast();
	lion->sleep();
	lion->roar();
	delete lion;

	Animal* animal = new Lion();
	animal->sleep();
	animal->roar();
	delete animal;
	
}

