// bakepizzaoverloadedfunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);

int main()
{

    bakepizza("pepperoni", "mushrooms");

    return 0;

}

void bakepizza() {

    std::cout << "Here is your pizza!\n";
}
    
void bakepizza(std::string topping1) {

    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakepizza(std::string topping1, std::string topping2) {

        std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

//functions can share name but have different parameters, name + parameters = function signature
//these are overloaded functions (same name, different parameters)