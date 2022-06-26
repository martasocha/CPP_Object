#include "Mastermind.hpp"
#include <iostream>;

Mastermind::Mastermind(std::string hiddenCode)
{
	this->hiddenCode = hiddenCode;
}


std::string Mastermind::checkColors(std::string answer)
{
	std::string result(4, '_');
	for (int i = 0; i < 4; ++i)
	{
		if (hiddenCode[i] == answer[i])
		{
			result[i] = 'B';
			
		}
		else
		{
			result[i] = findInDifferentPlace(answer[i]);
		}

	}
	attempts--;
	return result;
}

int Mastermind::getAttempts()
{
	return attempts;
}

char Mastermind::findInDifferentPlace(char color)
{
	for (int i = 0; i < 4; ++i)
	{
		if (hiddenCode[i] == color)
		{
			return 'W';
		}
	}
	return '_';
}

bool Mastermind::isOver()
{
	return (attempts == 0);
}

void Mastermind::colorIt(std::string color)
{
	for (int i = 0; i < 5; ++i)
	{
		if (color[i] == 'W')
			std::cout << "\033[1;37mW\033[0m";
		else if(color[i] == 'B')
			std::cout << "\033[1;30mB\033[0m";
		else if(color[i] == '_')
			std::cout << "\033[1;33m_\033[0m";
	}
	std::cout << '\t';
}
