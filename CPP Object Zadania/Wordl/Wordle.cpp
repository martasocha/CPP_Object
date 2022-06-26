// Wordl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wordle.hpp"

Wordle::Wordle(std::string secret)
{
    this->secret = secret;
}

char Wordle::findIfExists(char c)
{
        for (int k = 0; k < 5; ++k)
        {
            if (c == secret[k])
            {
                return 'O';
            }
        }
        return 'B';
}


void Wordle::test(std::string guess)
{
    answers[attempt] = std::string(5,'B');
    for (int i = 0; i < 5; ++i)
    {
        if (guess[i] == secret[i])
        {
            answers[attempt][i] = 'G';
        }
        else
        {
            answers[attempt][i] = findIfExists(guess[i]);
        }
    }
    guesses[attempt] = guess;
    attempt++;
}


void Wordle::draw()
{

    for (int i = 0; i < 6; ++i) //6 bo mamy 6 wierszy
    {
        std::cout << guesses[i] << '\t' << answers[i] << std::endl;
    }

}


bool Wordle::isFinished()
{
    if (attempt == 0)
        return false;
    return (attempt == 6 || answers[attempt - 1] == "GGGGG");
}
