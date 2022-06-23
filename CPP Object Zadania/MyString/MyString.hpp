#include <string>
#include <iostream>
#pragma once

class MyString
{
	char* arr;
public:
	MyString();
	MyString(char* input);
	//MyString(const MyString& other);
	MyString& operator=(MyString other);
	virtual ~MyString();
	//std::ostream& oparator<<(std::otream& s, const )
	void print();

	MyString append(char* input);
	//append zwraca nowy obiekt typu MyString
	void appendToSame(char* input); // to nie spelnia cech ummutability

	MyString append(MyString input);
	void appendToSame(MyString input);

	MyString firstWord();
};
