#pragma once
#include <string>

class Mastermind
{
	std::string hiddenCode;
	int attempts = 5;
public:
	Mastermind(std::string hiddeCode);
	std::string checkColors(std::string answer);
	int getAttempts();
	char findInDifferentPlace(char color);
	bool isOver();
	void colorIt(std::string color);

};