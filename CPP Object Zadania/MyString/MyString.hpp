#include <string>
#include <iostream>
#pragma once

class MyString
{
	char* arr;
public:
	MyString();
	MyString(char* input);
	virtual ~MyString();
	void print();

	MyString append(char* input);
	//append zwraca nowy obiekt typu MyString
	void appendToSame(char* input); // to nie spelnia cech ummutability

	MyString append(MyString input);
	void appendToSame(MyString input);

	MyString firstWord();
};
