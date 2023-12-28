// arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int main()
{
    std::string students[] = { "Bob", "Billy", "Will", "Kyle", "Rob" };

    for (std::string student : students) { //foreach loop which helps to display arrays
        std::cout << student << "\n";
    }

    int grades[] = {65, 72, 91, 34, 57, 46, 75, 88, 20, 9};
    for (int grade : grades) {
        std::cout << grade << "\n";
    }

    return 0;
}

