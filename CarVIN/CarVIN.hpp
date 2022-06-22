#pragma once
#include <string>

enum class EngineType { Diesel, Petrol };

class Car
{
	class Engine
	{
		double size;
		EngineType engineType;
		static std::string year;
		static int count;
		static const std::string loction;

	public:
		
		static std::string generateVIN(const Engine engine);
		static int getCount();
		std::string getYear() const;
		Engine();
		void oilChange();
		void setEngineType(EngineType engineType);
		void setSize(double size);
	};
	Engine engine;//pole w klasie Car
	std::string vin;
public:
	Car(EngineType engineType, double size);
	void annualService();
	void oilChange();
	std::string getVIN();
};
