#include "TicTacToe.hpp"

int main()
{
	std::cout << "Czy gracz pierwszy to AI: ";
	std::string choice;
	std::cin >> choice;
	Player* p1 = nullptr;
	Player* p2 = nullptr;
	if (choice == "T")
	{
		Player* p1 = new AIPlayer(CheckerState::O);
	}
	else
	{
		Player* p1 = new HumanPlayer(CheckerState::O);
	}
	std::cout << "Czy gracz drugi to AI: ";
	std::string choice;
	std::cin >> choice;
	if (choice == "T")
	{
		Player* p2 = new AIPlayer(CheckerState::X);
	}
	else
	{
		Player* p2 = new HumanPlayer(CheckerState::X);
	}
	Game g(p1, p2);
	g.start();

	delete p1;
	delete p2;

	return 0;
}
