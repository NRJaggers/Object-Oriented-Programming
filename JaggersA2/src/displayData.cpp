/*
 * displayData.cpp
 *
 *  Created on: Sep 29, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;

void displayData(Student * data[], int index)
{
	cout << left
		 << setw(25) << data[index]-> lastName
		 << setw(4)  << data[index]-> middleInitial
		 << setw(18) << data[index]-> firstName
		 //<<right
		 << setw(11)  << data[index]-> collegeCode
		 << setfill('0') << right
		 << setw(2) << data[index]-> locationCode
		 << "      "
		 << setw(6) << data[index]-> sequenceCode
		 << setfill(' ') << setw(6)
		 << setw(6)	 << data[index]-> age
		 //
		 << endl ;

}
