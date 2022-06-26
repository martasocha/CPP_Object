#include <iostream>
#include "Wordle.hpp"
#include <stdlib.h>

int main()
{
    Wordle game("BEADY");
    
    do
    {
        std::string word;
        std::cin >> word;
        //sprawdz czy slowo ma 5 liter
        game.test(word);
       // std::cout << colors; - przezucona do metody draw
        //system("cls"); // czyscimy konsole - ma byc w cpp w draw na poczatku
        game.draw();
    } while (!game.isFinished());


}