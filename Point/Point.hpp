#pragma once
#include<cmath>

class Point2D {
	int x, y;
public:
	Point2D(int _x, int _y);
	void setXY(int x, int y);
	int getX();
	int getY();
	double ShowTheDistance(Point2D other);

};

//double calc(Point2D p1, Point2D p2)
//{
//
//}

class Point3D : public Point2D {
	int z;
public:
	Point3D(int _x, int _y, int _z);
	//Point3D(int x, int y, int z);
	void setZ(int z);
	int getZ();
};