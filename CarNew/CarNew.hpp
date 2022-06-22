#include<iostream>
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
	Mark mark;

public:
	Car(Mark mark);
	int getNumber();
	static int getCount();
};

