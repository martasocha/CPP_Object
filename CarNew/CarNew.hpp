#include<iostream>
#include<string>
#pragma once

enum class Mark
{
	skoda,
	renault,
	mazda,
	nissan,
	opel,
	audi
};

class Car
{
	int no;
	static int count;

public:
	Car(Mark mark);
	Mark mark;
	int getNumber();
	static int getCount();
};

