/*
 * welcome.cpp
 *
 *  Created on: Sep 29, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
using namespace std;

void welcome ()
{
	//welcome message and short description
	cout << "Hello and Welcome to the program! \n\n"
		 << "This program practices use of base & derived classes\n"
		 << "as well as virtual functions and polymorphism."
		 << "In the main program, information from a file \n"
		 << "will be read into a console and displayed to you. \n"
		 << "Then you will be able to enter individual IDs and look\n"
		 << "at different vehicle's information. At the end,\n"
		 << "an updated list will also be displayed to you ."
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}


