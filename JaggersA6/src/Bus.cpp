/*
 * Bus.cpp
 *
 *  Created on: Oct 9, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <iomanip>
#include "Bus.h"
using namespace std ;

//setters
		void Bus :: setBusStatus(char busStatus)
			{
				status = busStatus ;
			}
	//getters
		string Bus :: getBusID()
			{
				return busID ;
			}
		string Bus :: getManufacturer()
			{
				return manufacturer ;
			}
		int Bus :: getCapacity()
			{
				return capacity ;
			}
		int Bus :: getMileage()
			{
				return mileage ;
			}
		char Bus :: getStatus()
			{
				return status ;
			}

	//constructors
		Bus :: Bus(string cBusID, string cManufacturer, int cCapacity, int cMileage, char cStatus)
			{
				busID 		 = cBusID ;
				manufacturer = cManufacturer ;
				capacity	 = cCapacity ;
				mileage		 = cMileage ;
				status 		 = cStatus ;


			}

	//functions
		void Bus :: displayInfo()
		{
			cout << left
				 << setw(10) << busID
			     << setw(19) << manufacturer
				 << setw(15) << capacity
				 << setw(10) << mileage
				 << setw(9)  << status;
		}

