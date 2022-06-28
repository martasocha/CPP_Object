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


//void Wordle::draw()
//{
//    
//    for (int i = 0; i < attempt; ++i) //6 bo mamy 6 wierszy
//    {
//        std::cout << guesses[i] << '\t';
//
//        for (int j = 0; j < 5; ++j)
//        {
//            if (answers[i][j] == 'G')
//            {
//                std::cout << "\033[1;32mG\033[0m";
//            }
//            else if (answers[i][j] == 'B')
//                std::cout << "\033[1;30mB\033[0m";
//            else if (answers[i][j] == 'O')
//                std::cout << "\033[1;33mO\033[0m";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;
//}

void Wordle::draw()
{
    for (int i = 0; i < attempt; ++i) //6 bo mamy 6 wierszy
    {
        std::cout << guesses[i] << '\t';

        for (int j = 0; j < 5; ++j)
        {
            if (answers[i][j] == 'G')
                printOnScreen('G', Color::GREEN);
            else if (answers[i][j] == 'B')
                printOnScreen('B', Color::BLUE);
            else if (answers[i][j] == 'O')
                printOnScreen('0', Color::ORANGE);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Wordle::printOnScreen(char c, enum class Color color)
{
    if (c == 'G')
        std::cout << "\033[1;32mG\033[0m";
    else if (c == 'B')
        std::cout << "\033[1;30mB\033[0m";
    else if (c == 'O')
        std::cout << "\033[1;mO\033[0m";
}

bool Wordle::isFinished()
{
    if (attempt == 0)
        return false;
    return (attempt == 6 || answers[attempt - 1] == "GGGGG");
}

