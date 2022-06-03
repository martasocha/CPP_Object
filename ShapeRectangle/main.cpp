#include <iostream>
#include "ShapeRectangle.hpp"

int main ()
{
	Point ur
	{
	ur.x = 10,
	ur.y = 6,
	};

	Point ll
	{
	ll.x = 3,
	ll.y = 3,
	};

	Rectangle rect(ur,ll);

	std::cout << "Rectangle: " << rect.getField() << " " << rect.getCircuit() << std::endl;

}