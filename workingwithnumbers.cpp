// workingwithnumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	//hexadecimal numbers are prefixed by 0x, while binary numbers are prefixed by 0b
	int one = 0b11111111;
	int two = 0xFF;

	//you can use single quotes to seperate numbers
	int number = 1'000'000;

	//this function generates a random number (must use cstdlib, ctime), can use this generator to produce a luck-based part of an arcade game 
	//i.e. monster appearance only comes when remainder is 1, 3, 5, or 7
	long elapsedsecs = time(0); // secs since Jan 1 1970
	srand(elapsedsecs); //gives number elapsed which changes (but too big)
	int number = rand() % 10; //dividing by 10 will give a random remainder each time, with digits 0-9
	std::cout << number;

	//don't really need variable tho, can just put time(0) in srand brackets
	//use this formula and set it as the random number to limit values:
	//rand() % (maxValue - minValue + 1) + minValue
