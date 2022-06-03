#include "ShapeRectangle.hpp"
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

Rectangle::Rectangle(Point ur, Point ll)
{
	this->a = ur.x - ll.x;
	this->b = ur.y - ll.y;

}

int Rectangle::getField()
{
	return a * b;
}


int Rectangle::getCircuit()
{
	return 2 * a + 2 * b;
}