// passarraytofunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = { 49.99, 56.49, 53.72, 44.69 };
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "Your total is $" << total;
}

double getTotal(double prices[], int size){

    double total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}