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
		 << "This program practices use of structures and \n"
		 << "file streaming. Student info will be read from an \n"
		 << "external file and then organized and printed on the \n"
		 << "console. The average age of students and the youngest\n"
		 << "student will also be displayed.\n"
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}


