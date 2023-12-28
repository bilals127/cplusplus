// searcharrayforelement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main()
{
    std::string foods[] = {"pizza", "rice", "pasta", "cookies"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: ";
    std::cin >> myFood;

    index = searchArray(foods, size, myFood);

    if (index != -1) {
        std::cout << myFood << " is at index " << index;
    }
    else {
        std::cout << myFood << " is not in the index";
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}