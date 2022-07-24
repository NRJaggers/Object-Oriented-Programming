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
		void Bus ::	setBusID(string tempID)
			{
				busID = tempID ;
			}
		void Bus ::	setManufacturer(string tempManufacturer)
			{
				manufacturer = tempManufacturer ;
			}
		void Bus ::	setCapacity(int tempCapacity)
			{
				capacity = tempCapacity ;
			}
		void Bus ::	setMileage(int tempMileage)
			{
				mileage = tempMileage ;
			}
		void Bus :: setStatus(char tempStatus)
			{
				status = tempStatus ;
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
		int	 Bus ::	getBusCount()
			{
				return this->busCount ;
			}
		float Bus :: getAveBusMileage()
			{
				return this->averageBusMileage ;
			}

	//constructors
		Bus :: Bus()
			{
				currentMaint = 0 ;
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

