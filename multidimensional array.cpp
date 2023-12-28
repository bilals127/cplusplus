// multidimensional array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	//multidimensional arrays have rows and columns [rows][columns] that multply to number of elements, column size is needed but not row size
	std::string cars[][3] = { { "Mustang", "Escape", "F150" }, //cars by ford
							  { "Corvet", "Equinox", "Silverado" }, //cars by chevrolet
							  { "Challenger", "Durango", "Ram 1500" } }; //cars by dodge

	//row 0, column 0 = Mustang

	//use nested loops to iterate over a multidimensional array

	int rows = sizeof(cars) / sizeof(cars[0]);
	int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
}
