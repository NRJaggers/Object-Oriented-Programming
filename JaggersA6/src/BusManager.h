/*
 * BusManager.h
 *
 *  Created on: Nov 3, 2019
 *      Author: Nathan Jaggers
 */

#include "Bus.h"

#ifndef BUSMANAGER_H_
#define BUSMANAGER_H_

class BusManager
{
private:

//members
	Bus * busRecords[50] ;

//functions
	void displayCH() ;

public:

//constructor
	BusManager() ;

//functions
	void transactions() ;
	void cleanUp() ;

};




#endif /* BUSMANAGER_H_ */
