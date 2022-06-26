// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool check(int a)
{
    if (a == 5)
    {
        return false;
    }
    else
        return true;
}

int main()
{
    int a = 0;
    bool finish;
    do
    {
        a++;
        finish = check(a);
    } while (finish);
}

