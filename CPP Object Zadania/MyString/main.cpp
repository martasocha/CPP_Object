// MyString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyString.hpp"

int main()
{
	MyString empty;
	empty.print();

	MyString alaMaKota((char*)"Ala ma kota");
	alaMaKota.print(); // Ala ma kota
	MyString alaMaKotaAKotMa = alaMaKota.append((char*)",a kot ma ");
	alaMaKota.print(); // Ala ma kota
	alaMaKotaAKotMa.print(); //Ala ma kota, a kot ma

	MyString first = alaMaKota.firstWord();
	first.print();

	//char arr[] = { 'A', 'l', 'e', '\0' };
	//MyString ale(arr);
	//ale.print(); //Ale
	//MyString full = alaMaKotaAKotMa.append(ale);
	//full.print(); //Ala ma kota a kot ma Ale

	MyString olaIlalaOli((char*)"Ola i lala Oli");
	olaIlalaOli.print();
	olaIlalaOli.appendToSame((char*)". Ala i As Ali.");
	olaIlalaOli.print();

	//MyString ToAla((char*)"To Ala.");
	//ToAla.appendToSame((char*)". A to Ola.");

    
}