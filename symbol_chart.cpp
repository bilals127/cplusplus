// symbol_chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    std::cout << "Enter a chosen symbol: ";
    std::cin >> symbol;

    for (int i = 1; i <= columns;  i++) {
        for (int j = 1; j <= rows; j++) {
            std::cout << symbol << ' ';
        }
        std::cout << "\n";
    }
}


