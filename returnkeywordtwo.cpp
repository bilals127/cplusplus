// returnkeywordtwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

std::string doublestrings(std::string string1, std::string string2);

int main()
{
    std::string firstName = "Bilal";
    std::string lastName = "Syed";
    std::string fullName = doublestrings(firstName, lastName);

    std::cout << "Hello, " << fullName;

    return 0;
}

std::string doublestrings(std::string string1, std::string string2) {

    return string1 + " " + string2;
}

