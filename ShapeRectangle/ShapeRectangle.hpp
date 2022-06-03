#pragma once


struct Point
{
    int x, y;
};

class Rectangle
{
    int a = 0, b = 0;
public:

    Rectangle(Point ur, Point ll);
    int getField();
    int getCircuit();

};
