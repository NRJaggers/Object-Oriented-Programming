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

class Bus
{
private:

	string 	busID			;
	string 	manufacturer	;
	int 	capacity		;
	int 	mileage			;
	char 	status			;

public:

	//setters
		void	setBusStatus(char);
	//getters
		string	getBusID();
		string 	getManufacturer();
		int		getCapacity();
		int		getMileage();
		char	getStatus();

	//constructors
		Bus(string, string, int, int, char) ;

	//functions
	    void displayInfo();


};



#endif /* BUS_H_ */
