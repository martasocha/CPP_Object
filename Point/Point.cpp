#include "Point.hpp"

Point2D::Point2D(int _x, int _y):x(_x), y(_y)
{
}

void Point2D::setXY(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point2D::getX()
{
    return x;
}

int Point2D::getY()
{
    return y;
}

double Point2D::ShowTheDistance(Point2D other)
{
   if (x == other.x)
   {
       int distance = abs(y - other.y);
       return distance;
   }
   else if (y == other.y)
   {
       int distance = abs(x - other.x);
       return distance;
   }
   else
   {
       int distanceX = abs(other.x - x);
       int distanceY = abs(other.y - y);
       int distance = sqrt(pow(distanceX, 2) + pow(distanceY, 2));
   }
}


Point3D::Point3D(int _x, int _y, int _z): Point2D(_x,_y),z(_z) //kontruktor klasy point 3d przyjmuje 3 parametry _x, _y, _z, zanim sie wywola musi wywolac konstruktor klasy Point2D
{
}

void Point3D::setZ(int z)
{
    this->z = z;
}


int Point3D::getZ()
{
    return z;
}
