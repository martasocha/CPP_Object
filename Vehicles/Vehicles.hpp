#pragma once

class Vehicle1
{
protected:
	int* lastDrives;
	int i = 0;
public:
	Vehicle1(); //uzupelnic
	virtual ~Vehicle1();
	virtual void drive() = 0; // cos zmienic
};

class Bus : public Vehicle1
{
public:
	Bus();
	virtual ~Bus();
	void drive() override;
};

class Bicycle : public Vehicle1
{
public:
	Bicycle();
	//virtual ~Bicycle();
	void drive() override;
};
