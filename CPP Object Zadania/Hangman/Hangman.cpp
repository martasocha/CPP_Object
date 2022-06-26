
#include <iostream>
#include "Hangman.hpp"


Hangman::Hangman(std::string secret)
{
    this->secret = secret;
    this->guessedWord = secret;
    for (int i = 0; i < secret.length(); ++i)
    {
        guessedWord[i] = '_';
    }
    for (int i = 0; i < 26; ++i)
    {
        alphabet[i] = false;
    }
}

std::string Hangman::getGuess()
{
    return guessedWord;
}

std::string Hangman::getAlphabet()
{
    std::string result;
    for (int i = 0; i < 26; ++i)
    {
        if (alphabet[i])
        {
            result += 'a' + i; //97+i
        }
        else
        {
            result += '_';
        }
    }
    return result;
}

bool Hangman::guess(char c)
{

    alphabet[c - 'a'] = true; 
    for (int i = 0; i < secret.length(); i++)
    {

        if (secret[i] == c)
        {

            guessedWord[i] = c;
        }
        else if (secret[i] != c && i == secret.length()-1)
        {
            attempt--;
            std::cout << "W secret nie ma takiej litery. " << std::endl;
            std::cout << "Liczba prob: " << attempt << std::endl;
        }

    }
    //bool result = (guessedWord == secret); // to samo co ponizej
    return guessedWord == secret;

}

std::string Hangman::getSecret()
{
    return secret;
}

bool Hangman::attemptsLeft()
{
    //if (attempt == 0)
    //{
    //    return false;
    //}
    //else
    //return true;

    return attempt == 0;
}
