// fahrenheittocelsius.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Please insert a given temperature in Fahrenheit: ";
    int ftemp;
    std::cin >> ftemp;
    int ctemp;
    ctemp = (ftemp - 32) / 1.8;
    std::cout << "The temperature in Celsius is " << ctemp << " degrees.";

}
