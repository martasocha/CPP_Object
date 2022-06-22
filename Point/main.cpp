// Point.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.hpp"

int main()
{
    Point2D point1(3, 3);
    Point2D point3(1, 1);
    std::cout << "Odleglosc miedzy point1 i point2 wynosi: " << point1.ShowTheDistance(point3) << std::endl;
    //Point3D point2;
    point1.setXY(3, 3);
    point3.setXY(1, 1);
    //point2.setXY(5, 6);
    //point2.setZ(2);
    std::cout << point1.getX() << std::endl;
    std::cout << point1.getY() << std::endl;
    //std::cout << point2.getX() << std::endl;
    //std::cout << point2.getY() << std::endl;
    //std::cout << point2.getZ() << std::endl;
}
