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
		 << "This program practices use of command line\n"
		 << "arguments, STLs like vector and map and iterators.\n"
		 << "In the main program, information from a file \n"
		 << "will be read into a console and displayed to you. \n"
		 << "You will be able to see the transcripts of students\n"
		 << "and how the data structure handles specific queries\n"
		 << "at the end.\n"
		 << "Have fun! (Click enter to continue) \n"
		 << "***************************************\n\n";
	cin.ignore();
}


