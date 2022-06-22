#pragma once

class Dish
{
	double kcal;
public:
	Dish(double _kcal);
	virtual void eat(); //1 wywolanie metody je z disha ile kcal
	bool isEmpty();
	double& getKcal();
};

class Soup : public Dish
{
public:
	Soup(double _kcal);
	virtual void eat() override;
	//jedzac zupe, zabieramy 50kcal z potrawy
};

class Main : public Dish
{
public:
	virtual void eat() override;
	Main(double _kcal);
	//jedzac glowne danie, zabieramy 100kcal  potrawy
};