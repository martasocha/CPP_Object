#pragma once

class Promotor
{
	Student student;
public:
};

class Student
{
	Promotor promotor;
public:
	void setPromotor(Promotor promotor);
};
