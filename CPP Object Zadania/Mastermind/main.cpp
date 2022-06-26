#include <iostream>
#include "Mastermind.hpp"

int main()
{
    Mastermind game("RBGY");
    std::string colors;
    std::cout << "MASTERMIND" << std::endl;
    std::cout << "The aim of the game is to find the exact positions of the colors in the sequence." << std::endl;
    std::cout << "A white circle means that the pin is the correct color but not correctly positioned." << std::endl;
    std::cout << "The black circle means both the color and position are correct." << std::endl << std::endl;
    do
    {
        std::string solution;
        std::cout << "Choose 4 colors: R-red, B-blue, G-green, Y- yellow, P-pink: " << std::endl;
        std::cin >> solution;
        colors = game.checkColors(solution);
        game.colorIt(colors);
        std::cout << "Attempts left: " << game.getAttempts() << std::endl;
        std::cout << std::endl;

    } while (!game.isOver() && !(colors == "BBBB"));
}