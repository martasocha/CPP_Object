// RefAndPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float showAverage(int* tab, int size)
{
	float sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += *(tab + i);
	}
	float average = sum / size;
	return average;
}

int* createArray(int n)
{
	int* tab = new int[n];
	for (int i = 0; i < n; ++i)
	{
		*(tab + i) = i;
		
	}
	return tab;
}

void printArray(int* tab, int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << "tab[" << i << "] " << *(tab + i) << ' ' << "adres: " << tab + i << std::endl;
	}
}

void zad1()
{
	int n = 10;
	int* tab = new int[n];
	for (int i = 0; i < n; ++i)
	{
		*(tab + i) = i;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << "tab[" << i << "] " << *(tab + i) << ' ' << "adres: " << tab + i << std::endl;
	}
	std::cout << std::endl;

	delete[] tab;
	
	const int size = 4;
	int array[size] = {};
	int* array_ptr = createArray(size);
	printArray(array_ptr, size);
	float average = showAverage(array_ptr, size);
	std::cout << "Srednia z liczb w tablicy wynosi= " << average << std::endl;
	delete[] array;
}

void zad4()
{
	struct Point
	{
		int x, y;
		void changePoint(Point point)
		{
			point.x = 24;
		}
	};

	Point point1;
	point1.x = 15;
	point1.y = 10;

	Point point2 = point1;
	point2.x = 12;

	std::cout << "point1.x= " << point1.x << ", adres: " << &point1.x << std::endl;
	std::cout << "point1.y= " << point1.y << ", adres: " << &point1.y << std::endl;
	std::cout << "point2.x= " << point2.x << ", adres: " << &point2.x << std::endl;
	std::cout << "point2.y= " << point2.y << ", adres: " << &point2.y << std::endl;

	point2.changePoint(point2);
	std::cout << "Po uzyciu changePoint: point2.x= " << point2.x << ", adres: " << &point2.x << std::endl;
	std::cout << "Po uzyciu changePoint: point2.y= " << point2.y << ", adres: " << &point2.y << std::endl;


}

void zad5()
{
	struct Point
	{
		int x, y;
		void changePoint(Point& point)
		{
			point.x = 24;
		}
	};

	Point point1;
	point1.x = 15;
	point1.y = 10;

	//Point p2 {5,10};

	Point& point2 = point1;
	point2.x = 12;

	std::cout << "point1.x= " << point1.x << ", adres: " << &point1.x << std::endl;
	std::cout << "point1.y= " << point1.y << ", adres: " << &point1.y << std::endl;
	std::cout << "point2.x= " << point2.x << ", adres: " << &point2.x << std::endl;
	std::cout << "point2.y= " << point2.y << ", adres: " << &point2.y << std::endl;

	point2.changePoint(point2);
	std::cout << "Po uzyciu changePoint: point2.x= " << point2.x << ", adres: " << &point2.x << std::endl;
	std::cout << "Po uzyciu changePoint: point2.y= " << point2.y << ", adres: " << &point2.y << std::endl;


}

void zad8()
{
	struct Point
	{
		int x, y;
		void foo(const Point& point)
		{
			//point.x = point.x + 1;
			//point.y = point.y + 1;
			std::cout << &point << std::endl;
		}
	};

	Point point1;
	point1.x = 15;
	point1.y = 10;

	//Point p2 {5,10};

	Point point2 = point1;

	std::cout << "point1.x= " << point1.x << ", adres: " << &point1 << std::endl;
	
	

	point1.foo(point1);
	//std::cout << "Po uzyciu changePoint: point1.x= " << point.x << ", adres: " << &point2.x << std::endl;
	


}

int main()
{
	//zad1();
	//zad4();
	//zad5();
	//zad6();
	zad8();
}
