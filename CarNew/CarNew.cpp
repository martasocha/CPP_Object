#include "CarNew.hpp"

int Car::count = 0;

//Car::Car()
//{
//	this->no = count;
//	count++;
//}

Car::Car(Mark mark)
{
	this->mark = mark;
	this->no = count;
	count++;
}

int Car::getCount()
{
	return count;
}

int Car::getNumber()
{
	return no;
}