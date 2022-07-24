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
		 << "In the main program, you will be able to \n"
		 << "calculate regular and overtime pay based on hourly \n"
		 << "rate and hours worked in a week. The calculation will \n"
		 << "loop until you put in a negative number for hours.\n"
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}


