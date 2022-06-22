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

	char arr[] = { 'A', 'l', 'e' };
	MyString ale(arr);
	ale.print(); //Ale
	MyString full = alaMaKotaAKotMa.append(ale);
	full.print(); //Ala ma kota a kot ma Ale


    
}