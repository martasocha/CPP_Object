#pragma once

class Car {

public:
	class Engine {
	public:
		double engineCapacity;
		enum class EngineType : char
		{
			Diesel,
			Petrol,
			Gas
		};
		void changeOil(EngineType type);
		void carService(EngineType type);
	};
};
