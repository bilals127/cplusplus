// returnkeyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double square(double length); //void changed to match data type of returned variable 
double cube(double length);

int main()
{

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";
    return 0;
}

double square(double length) {

    double result = length * length;
    return result;

}

double cube(double length) {

    double resulttwo = length * length * length;
    return resulttwo;
}

