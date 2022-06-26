#include "MyString.hpp"


MyString::MyString()
{
	this->arr = new char[1];
	this->arr[0] = '\0';
}

MyString::MyString(char* input)
{
	int lenght = std::strlen(input);
	this->arr = new char[lenght + 1];
	//this->arr = input; //uzalezniamy sie od tablicy zarzadzanej przez obiekt zew
	for (int i = 0; i < lenght; ++i)
	{
		*(arr + i) = *(input + i);
	}
	arr[lenght] = '\0';
}

MyString::MyString(const MyString& other)
{
	this->arr = new char[std::strlen(other.arr) + 1];
	for (int i = 0; i < std::strlen(this->arr); i++)
	{
		this->arr[i] = other.arr[i];
	}
	this->arr[std::strlen(other.arr)] = '\0';
}

//MyString& MyString::operator=(MyString other)
//{
//	this->arr = new char[std::strlen(other.arr) + 1];
//	for (int i = 0; i < std::strlen(other.arr); ++i)
//	{
//		this->arr[i] = other.arr[i];
//	}
//	this->arr[std::strlen(other.arr)]
//	return 
//}

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
	int lenghtarr = std::strlen(arr);
	int lenghtinput = std::strlen(input);
	int lenght = lenghtarr + lenghtinput;
	char* result = nullptr;
	result = new char[lenght + 1];

	for (int i = 0; i < lenghtarr; ++i)
	{
		*(result + i) = *(arr + i);
	}
	for (int j = 0; j < lenghtinput; ++j)
	{
		*(result + j +lenghtarr) = *(input + j);
	}

	*(result + lenght) = '\0';
	return MyString(result); // opakowujemy nasz char*

	////////////
	//int length1 = std::strlen(arr); //zlicza dugo pierwszej tablicy - 3
	//int length2 = std::strlen(input); // zlicza dugo drugiej tablicy - 3
	//int length3 = length1 + length2;// dodaje te dugoci - 6
	//char* newArr = new char[length3 + 1]; // tworzymy nowego stringa - dodajemy do dugoci +1 dla zera - 7
	//for (int i = 0; i < length1; i++) //wypeniamy znakami z pierwszej tablicy
	//{
	//	newArr[i] = arr[i]; // [a,l,a]
	//}
	//for (int i = 0; i < length2; i++) //wypeniamy znakami z drugiej tablicy
	//{
	//	newArr[i + length1] = input[i];// [a,l,a, k, o, t]
	//}
	//newArr[length3] = '\0'; //ustawia ostatnie miejsce w tablicy na zero
	//return MyString(newArr);

}

void MyString::appendToSame(char* input)
{
	int lenghtArr = std::strlen(arr);
	int lenghtInput = std::strlen(input);
	int lenght = lenghtArr + lenghtInput;

	char* newText = nullptr;
	newText = new char[lenght + 1];

	for (int i = 0; i < lenghtArr; ++i)
	{
		*(newText + i) = *(arr + i);
	}
	for (int j = 0; j < lenghtInput; ++j)
	{
		*(newText + j + lenghtArr) = *(input + j);
	}

	*(newText + lenght) = '\0';
	MyString arr(newText);
	delete[] newText;

}

MyString MyString::append(MyString input)
{
	MyString result = this->append(input.arr); //wywolujemy metode na rzecz obiektru w ktorym jestesmy, dobieramy sie do pola *arr w input!

	return result;
	// return append(input.arr);
}

void MyString::appendToSame(MyString input)
{
	append(input.arr);
}

MyString MyString::firstWord()
{
	int lenghtArr = std::strlen(arr);
	int firstWordLength = 0;

	for (int i = 0; i < lenghtArr; ++i)
	{
		if (*(arr + i) != 32)
		{
			firstWordLength++;
		}
		else
		{
			break;
		}
	}

	char* firstWord = nullptr;
	firstWord = new char[firstWordLength + 1];

	for (int i = 0; i < firstWordLength; ++i)
	{
		if (*(arr + i) != 32)
		{
			*(firstWord + i) = *(arr + i);
		}
	}
	*(firstWord + firstWordLength) = '\0';
	
	MyString newString(firstWord);
	delete[] firstWord;
	return newString;

}
