/*
 * displayCH.cpp
 *
 *  Created on: Oct 10, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <iomanip>
#include "displayCH.h"
using namespace std ;

void displayCH()
	{
		cout << "============================================================\n"
			 << left
			 << setw(10) << "Bus ID"
			 << setw(19) << "Bus Manufacturer"
			 << setw(15) << "Bus Capacity"
			 << setw(10) << "Mileage"
			 << setw(9)  << "Status"
			 << "\n============================================================\n" ;
	}

