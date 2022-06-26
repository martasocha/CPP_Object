#pragma once

struct Item
{
	int weight; // kg
	int value;
};

class Shop
{
	Item items[10];
public:
	Shop(); //konstruktor powinien wypelniac tablice przedmiotow - lodowymi przedmiotami, przedmioty dynamicznie przez new
	Item steal(int index);
	Item peek(int index);
};
class Backpack
{
	const int capacity; //15kg
	Item stolen[10]; //ukradzione przedmioty
	//int value;
public:
	Backpack(int _capacity);
	int calculateCurrentValue();
	int put(Item item); // zwraca ile miejsca zostalo w plecaku
};

class Robber
{
	Backpack backpack; //robber ma pleceak, plecak nie ma zlodzieja// plecak powinien byc skonstruowany w konstruktorze zlodzieja
public:
	Robber(int capacity); //zainicjalizuje plecak odpowiednia pojemnoscia
	void robWhatever(Shop& shop);// kradniemy peirwsze co sie pojawi w tablicy w Shop

	//void robRandom(); //lodowo
	//void robGreedy(); //logika 2
	int getValue(); //odwolanie sie do Calculate value

};

ostream& operator<<(std::ostream& s, const Robber& r)