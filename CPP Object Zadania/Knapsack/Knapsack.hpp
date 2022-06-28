#pragma once
#include <iostream>

struct Item
{
	int weight; // kg
	int value;
};

class Shop
{
	Item items[10];
public:
	Shop(); //konstruktor powinien wypelniac tablice przedmiotow - lodowymi przedmiotami
	Item steal(int index);
	Item peek(int index);
	Item* getItems() const;
	int findMostEfficient();
};
class Backpack
{
	const int capacity; //15kg
	Item stolen[10]; //ukradzione przedmioty
	int currentCapacity = 0;
	int firstAvailableIndex = 0;

public:
	Backpack(int capacity);
	int calculateCurrentValue();
	int put(Item item); // zwraca ile miejsca zostalo w plecaku
	Item* getItems() const;
	bool fits(int weight);
};

class Robber
{
	Backpack backpack; //robber ma pleceak, plecak nie ma zlodzieja// plecak powinien byc skonstruowany w konstruktorze zlodzieja
public:
	Robber(int capacity); //zainicjalizuje plecak odpowiednia pojemnoscia
	void robWhatever(Shop& shop);// kradniemy peirwsze co sie pojawi w tablicy w Shop
	void robMostEfficient(Shop& shop);
	//void robRandom(); //lodowo
	//void robGreedy(); //logika 2
	int getValue(); //odwolanie sie do Calculate value
	Item* getBackpackItems() const;

};


std::ostream& operator<<(std::ostream& s, const Robber& r);
std::ostream& operator<<(std::ostream& s, const Shop& r);
