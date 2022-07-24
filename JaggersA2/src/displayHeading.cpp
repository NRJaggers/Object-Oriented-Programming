/*
 * displayHeading.cpp
 *
 *  Created on: Sep 29, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;

void displayHeading()
{
	cout << left
		 <<	setw(25) << "Last name"
		 << setw(4)  << "MI"
		 << setw(12) << "First name"
		 << setw(14) << "College Code"
		 << setw(10)  << "Location"
		 << setw(10)  << "Sequence"
		 << setw(4)	 << "Age"
		 << endl
		 << "=========================="
		 << "=========================="
		 << "=========================="
		 << endl ;
}
