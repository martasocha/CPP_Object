#include <iostream>
#include "Const.hpp"


int main()
{
	const LectureRoom roomA;
	LectureRoom roomB;
	//roomA = roomB; - nie dziala
	roomB = roomA; // przestalo dzialac jak zaczelismy robic pola w klasie stale, zacznie dzialac jak zmienimy ja na statyczna 
	//deklracja stalej w cpp
	//roomB.size = 300;
	//roomA.size = 300 - nie dziala

	//const int a = 15;
	//int b = 25;
	//a = b;
	//b = a;
}
)