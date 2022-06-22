// BlackBoxGuess.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "BlackBoxGuess.hpp"
#include <random>

BlackBoxGuess::BlackBoxGuess(int range)
{
	//srand(time(NULL));
	//hiddenNumber = (std::rand() % range);

	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<>distrib(0, 50);

	hiddenNumber = distrib(gen);
}

int BlackBoxGuess::is(int guess)
{
	if (guess < hiddenNumber)
	{
		return 1;
	}
	else if (guess == hiddenNumber)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	//Zaimplementuj metodê return hiddenNumber-guess;

}
