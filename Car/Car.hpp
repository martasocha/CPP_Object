#pragma once

enum class EngineType
{
	Diesel,
	Petrol,
	Gas
};

class Car {
	class Engine {
	public:
		double engineCapacity;
		void changeOil();
		
	};
	
public:
	Engine engine;
	EngineType type;
	Car(EngineType type);
	void carService();
	void changeOil();
};
