
#include <iostream>

class Animal {
public:
	void roar() 
	{
		std::cout << "Animal roars" << std::endl;
	}
};
class Lion : public Animal {
public:
	void roar() {
		//std::cout << "Lion roars" << std::endl;
		this->Animal::roar();
	}
};

int main()
{
	Animal animal;
	animal.roar();

	Lion lion;
	lion.roar();
}