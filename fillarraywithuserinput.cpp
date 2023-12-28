 // fillarraywithuserinput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like (no spaces please) or 'q' to quit #" << i + 1 << ": ";
        std::cin >> temp;
        if (temp == "q") {
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods: \n";

    //instead of foreach loop, check for empty instead using empty(), then add ! 'not logical operator' (while i is not empty, print it)
    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << "\n"; 
    }
}

