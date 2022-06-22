#pragma once
#include<iostream>

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
};

class ElectricCar : public virtual Vehicle
{
public:
	ElectricCar();
	~ElectricCar();
	void drive();
};

class AutoTransmissionCar : public virtual Vehicle
{
public:
	AutoTransmissionCar();
	~AutoTransmissionCar();
};

class Tesla : public ElectricCar, public AutoTransmissionCar
{
public:
	Tesla();
	~Tesla();

};