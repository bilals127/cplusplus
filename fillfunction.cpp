// fillfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//fill: fills range of elements with specified value
//fill(begin position, end position, value)

int main()
{
	const int size = 99;

	std::string foods[size]; //as an example: to fill half, divide size by 2

	//all 100 elements filled with pizza
	fill(foods, foods + (size / 3), "pizza");
	fill(foods + (size/3), foods + ((size*2)/3), "hamburgers");
	fill(foods + ((size * 2)/3), foods + size, "hotdogs");

	//for each food in the foods array, display the food
	for (std::string food : foods) {
		std::cout << food << "\n";
	}

	return 0;
}