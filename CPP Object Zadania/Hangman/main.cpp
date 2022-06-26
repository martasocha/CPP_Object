#include <iostream>
#include "Hangman.hpp"

int main()
{
	Hangman game("wisielec");
	bool finished;
	bool finishedAttempt;
	do
	{
		std::string guess = game.getGuess(); //zwracac _A___A_
		std::cout << guess << std::endl; //wypisujemy podlogi
		std::string alphabet = game.getAlphabet(); // zwraca _ B C D E _
		std::cout << alphabet << std::endl; //wypisujemy caly alfabet, _ B C D E (jesli jakies slowo bylo zgadniete)

		std::cout << "Guess a letter: ";
		char letter;
		std::cin >> letter;
		finished = game.guess(letter); // zgadujemy - zmieniamy zarowno guess, jak i alphabet
		finishedAttempt = game.attemptsLeft();
	} while (!finished && finishedAttempt);
	std::cout << "Secret key was: " << game.getGuess();
}