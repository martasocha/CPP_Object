#pragma once
#include <string>

class Hangman
{
	std::string secret;
	bool alphabet[26]; // warto zainicjalizowac w konstruktorze
	std::string guessedWord;// na samym poczatku bedzie mial same _ _ _ _)
	int attempt = 2; // nie korzystamy na poczatku
public:
	Hangman(std::string secret); // wypelnic boolean
	std::string getGuess(); // wypelnic kreskami
	std::string getAlphabet(); 
	//returns true if all characters are guessed
	bool guess(char c);
	std::string getSecret();
	bool attemptsLeft();
};
