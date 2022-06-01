#include "Shape.hpp"
#include <cmath>
#include <corecrt_math_defines.h>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
	this->a = a;
	this->b = b;
}

void Rectangle::setDimension(int x, int y)
{
	a = x;
	b = y;
}

int Rectangle::getField()
{
	return a * b;
}


int Rectangle::getCircuit()
{
	return 2 * a + 2 * b;
}

void Circle::setDimension(int radius)
{
	r = radius;
}

double Circle::getField()
{
	return M_PI * pow(r,2);
}

double Circle::getCircuit()
{
	return 2 * M_PI * r;
}

int Triangle::maxDimension(int x, int y, int z)
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y > z)
	{
		return y;
	}
	else
	{
		return z;
	}
}


bool Triangle::checkDimensionsForTriangle(int x, int y, int z)
{
	if (x == y && x == z)
	{
		return true;
	}
	else if (maxDimension(x, y, z) == x || maxDimension(x, y, z) == y || maxDimension(x, y, z) == z)
	{
		if (maxDimension(x, y, z) < (x + y + z) - maxDimension(x, y, z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void Triangle::setDimension(int x, int y, int z, int height)
{
	a = x;
	b = y;
	c = z;
	h = height;
}

int Triangle::getField()
{
	return (a*h)/2;
}

int Triangle::getCircuit()
{
	return a + b + c;
}

Circle2::Circle2(int radius)
{
	r = radius;
}
double Circle2::getField2()
{
	return M_PI * pow(r, 2);
}

double Circle2::getCircuit2()
{
	return 2 * M_PI * r;
}
