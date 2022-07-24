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
		 << "This program practices use of classes.\n"
		 << "In the main program, information from a file \n"
		 << "will be read into a console and displayed to you. \n"
		 << "You will then be prompted to enter a transaction code \n"
		 << "and the program will proceed accordingly.\n"
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}


