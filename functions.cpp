// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void happybirthday(std::string name, int age)
{

    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "Happy birthday to " << name << "!\n";
    std::cout << "Happy birthday, happy birthday,\n";
    std::cout << "Happy birthday dear " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";

}

int main()
{
    
    std::string name = "Bilal";
    int age = 21;
    happybirthday(name, age); //function is called here (can be called multiple times)
    
    return 0;
}