// switches, cases, and operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//use switches and cases rather than repetitive elifs, put variable being compared in switch brackets
	int month;
	std::cout << "Enter month (1-12): ";
	std::cin >> month;

	switch (month) {

	case 1:
		std::cout << "It is January.";

	default:
		std::cout << "That was not a valid response. Try again.";

	}
		//and so on, with February being 2, March being 3, etc. default can be added for any other response except the ones called for

//*****************************************************************************************************************************

	//another alternative to if statements is the ternary operator
	//formatting is as follows:
	//condition ? outcome if true : outcome if false;

		int grade = 75;

		(grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";

//******************************************************************************************************************

	//for numbers, find odd or even by finding remainder of divison by 2 (if it is 1, odd, and if 0, even)
	//bool data type variables can simply be declared, no equals needed

	//operators like && and || can be used in if statements to join two conditions together 
	//&& checks if both are true, || checks if one is true
	//also remember that ! reverses an arithmetic operator, so != is 'not equal to'

	//length() can be used to get the length of a string in characters
	//std::getline gathers an entire line from input

		std::string name;
		std::cout << "Enter your name: ";
		std::getline(std::cin, name);

		if (name.length() > 12){
				std::cout << "Your name cannot be more than 12 characters, please try again.";
		}
		if (name.empty()) {
			std::cout << "You did not enter a name.";
			//empty() is used to see if input is left empty, and clear() [ used 'name.clear()' ] clears a variable of its assignment
			//append() attaches two strings together (can be used to add things such as '@gmail.com'
		}
		else {
			std::cout << "Good to go, " << name << "!";
		}

		name.insert(0, "@"); //inserts @ sign at beginning of string. 0 is first character, 1 is second charcter, and so on
		name.find(' '); //finds instance of character (in this case a blank space), gives position in terms 0, 1, 2...
		name.erase(0, 3) //erases characters from index 0 to 3 (non-inclusive brackets)


}
