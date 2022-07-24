/*
 * Bus.h
 *
 *  Created on: Oct 9, 2019
 *      Author: Nathan Jaggers
 */

#include <string>
using namespace std ;

#ifndef BUS_H_
#define BUS_H_

class MaintHist
{
public:

	string maintDate ;
	string maintType ;
	string maintMechanic;
};

class Bus
{
private:

	string 	busID = " "		;
	string 	manufacturer	;
	int 	capacity		;
	int 	mileage			;
	char 	status			;

	//static variables
	static int 	 busCount;
	static float totalBusMileage;
	static float averageBusMileage;

public:
	//Maintenance
		MaintHist banana[25] ;
		int		  currentMaint ;
	//setters
		void	setBusID(string);
		void	setManufacturer(string);
		void	setCapacity(int);
		void	setMileage(int);
		void	setStatus(char);
	//getters
		string	getBusID();
		string 	getManufacturer();
		int		getCapacity();
		int		getMileage();
		char	getStatus();
		int		getBusCount();
		float	getAveBusMileage();

	//constructors
		Bus() ;

	//functions
	    void displayInfo();


};



#endif /* BUS_H_ */
