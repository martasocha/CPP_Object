#include<iostream>
#include "Dishes.hpp"
#include <string>

bool handleInput(Dish* dish_ptr)
{
	std::cout << "Jesli chcesz sprobowac danie napisz eat: ";
	std::string operation;
	std::cin >> operation;
	if (operation == "dosc")
	{
		return false;
	}
	else if (operation == "eat")
	{
		dish_ptr->eat();
	}
	std::cout << "Kcal: " << dish_ptr->getKcal() << std::endl;
	return true;
}

Dish* createDish(int choice)
{
	Dish* dish_ptr = nullptr;

	if (choice == 1)
	{
		dish_ptr = new Soup(200);
	}
	else if (choice == 2)
	{
		dish_ptr = new Main(500);
	}
	else
	{
		std::cout << "Nie ma takiego dania";
	}
	return dish_ptr;
}

int main()
{
	//kelner pyta co sobie zyczymy - wypisac
	// jezeli 1-> stworz zupe
	// jezeli 2 -> stworz danie glowne
	// w petli:
	// za kazdym razem jak uzytkownik napisze "eat" - wywolujemy metode eat
	// jesli danie sie skonczy (kalorycznosc == 0) -> wychodzimy z programu

	std::cout << "Co Pani/Pan zamawia? 1 - zupa, 2 - danie glowne: ";
	int choice;
	std::cin >> choice;
	Dish* dish_ptr = nullptr;
	Dish* dish_ptr = createDish(choice);

	bool state = true;
	do {
		state =  handleInput(dish_ptr);
	} while (state && dish_ptr->isEmpty());
	std::cout << "Kcal: " << dish_ptr->getKcal() << std::endl;
	
	delete dish_ptr;
}

//Dish* dich
//if()
//dish = new Soup(200);
//else
//dish == new Main(500)