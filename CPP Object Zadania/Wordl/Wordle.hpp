#pragma once
#include <string>

enum class Color : char { GREEN = 32, BLUE = 30, ORANGE = 0 };
class Wordle
{
	std::string secret;
	std::string guesses[6];
	std::string answers[6];
	int attempt = 0;
	char findIfExists(char c);
	void printOnScreen(char c, enum class Color color);
public:
	Wordle(std::string secret); //mozna cos jeszcze dorzucic
	void test(std::string guess); //zwraca nam tablice czarow czyli tablice kolorow
	//metoda ktora sprawdzi czy slowo jest poprawne
	void draw(); // wypisuje obie tablice, jedna obok drugiej + a poczatku wyczyscic ekran
	bool isFinished(); // patrzy czy slowo BEADY to jest sceret albo to drugie GGGGG
	//bool isFinished(std::string guess); // sprawdzamy czy slowo jest secret oraz porownac liczbe prob
	//bool isFinished(std::string colours); sprawdzamy czy to slowo to "GGGGG";
	//void colorIt(char color);
};

//std::cout << '/t';
