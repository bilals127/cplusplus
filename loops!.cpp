// loops!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string name;
    //normal while loop (condition must become false to continue)
    while (name.empty()){
        std::cout << "Enter your first name: ";
        std::cin >> name;
    }

    std::cout << "Hello, " << name << "!";

    return 0;
    //**********************************************************************************************************
    
    //do while loop (executes block of code, then repeats if condition is still true)
    int number;
     do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
     }while (number < 0);

    std::cout << "The # is: " << number;

    return 0;

    //***********************************************************************************************************

    //for loops, formatting is as follows: for(int i = starting index; i<=10 [condition]; i++ [increment])
    for (int i = 10; i >= 1; i--) {

        std::cout << i << "\n";
    }

    std::cout << "HAPPY NEW YEAR!"; //this code will print i in decrement until it is 1, then print 'Happy New Year'
        //for decrement/increment more than 1, write += and then the number of choice i.e. i+=2 or i-=3

    return 0;

    //***********************************************************************************************************
    //break = breaks out of a loop
    //continue = skips current iteration
    for (int i = 1; i <= 20; i++) {
        if (i == 13)
            continue; //skips the '13' loop, so it is never printed. if break is used here, loop ends at 12.
        std::cout << i << "\n";
    }

    return 0;
}
