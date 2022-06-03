#pragma once

struct Point
{
    int x, y;
};

class Rectangle 
{
    int a = 0, b = 0;
public:
    Rectangle(); // konstruktor bezparametrowy, bezargumentowy
    Rectangle(int a, int b); //konstruktor parametrowy
    Rectangle(Point ur, Point ll);
    void setDimension(int x, int y);
    int getField();
    int getCircuit();

};


class Circle
{
    int r = 0;
public:
    void setDimension(int radius);
    double getField();
    double getCircuit();
};


class Circle2
{
    int r = 0;
public:
    Circle2(int radius);
    double getField2();
    double getCircuit2();
};

class Triangle
{
    int a = 0, b = 0, c = 0, h = 0;
public:
    int maxDimension(int x, int y, int z);
    //bool checkDimensionsForTriangle(int x, int y, int z);
    void setDimension(int x, int y, int z, int height);
    int getField();
    int getCircuit();
};

