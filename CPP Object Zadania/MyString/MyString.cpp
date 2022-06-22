#include "MyString.hpp"


MyString::MyString()
{
	this->arr = new char[1];
	this->arr[0] = '\0';
}

MyString::MyString(char* input)
{
	int lenght = std::strlen(input) + 1;
	this->arr = new char[lenght];
	//this->arr = input; //uzalezniamy sie od tablicy zarzadzanej przez obiekt zew
	for (int i = 0; i < lenght; ++i)
	{
		*(arr + i) = *(input + i);
	}
}

MyString::~MyString()
{
	delete[] arr;
}

void MyString::print()
{
	std::cout << arr << std::endl;
}

MyString MyString::append(char* input)
{
	int lenghtArr = std::strlen(arr);
	int lenghtInput = std::strlen(input);
	int lenght = lenghtArr + lenghtInput + 1;
	char* result = nullptr;
	result = new char[lenght];

	for (int i = 0; i < lenghtArr; ++i)
	{
		*(result + i) = *(arr + i);
	}
	for (int j = 0; j < lenghtInput; ++j)
	{
		*(result + j +lenghtArr) = *(input + j);
	}

	*(result + lenght) = '\0';
	//duzo operacji
	return MyString(result);
	//return MyString(result);
}

void MyString::appendToSame(char* input)
{
	int lenghtArr = std::strlen(arr);
	int lenght = std::strlen(arr) + std::strlen(input) - 1;
	//char* result = nullptr;
	//result = new char[lenght];

	for (int i = 0; i < lenghtArr; ++i)
	{
		*(arr + i + lenghtArr) = *(input + i);
	}

}

MyString MyString::append(MyString input)
{
	MyString result = append(input.arr);

	return result;
	// return append(input.arr);
}
