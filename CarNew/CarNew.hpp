#include<iostream>
#include<string>
#pragma once

class Car
{
	int no;
	static int count;

public:
	Car();
	int getNumber();
	static int getCount();
};

