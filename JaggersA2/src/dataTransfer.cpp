/*
 * dataTransfer.cpp
 *
 *  Created on: Sep 29, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include "Student.h"
using namespace std;

void dataTransfer(Student * pArray[], int index, string data, char dataCstr[])
{
	char mInt, cCode;
	int	lCode, sCode;
	short int sAge;

	pArray[index] = new Student ;

	pArray[index]-> firstName 	 	= data.substr(0,10) ;
	//cout << pArray[index]->firstName ;

	mInt =  dataCstr[10];
	pArray[index]-> middleInitial 	= mInt ;
	//cout << pArray[index]->middleInitial ;

	pArray[index]-> lastName 		= data.substr(20,20) ;
	//cout << pArray[index]->lastName ;

	cCode = dataCstr[40] ;
	pArray[index]-> collegeCode 	= cCode ;
	//cout << pArray[index]->collegeCode ;

	lCode = stoi(data.substr(41,2)) ;
	pArray[index]-> locationCode  	= lCode ;
	//cout << pArray[index]->locationCode ;

	sCode = stoi(data.substr(43,6)) ;
	pArray[index]-> sequenceCode  	= sCode ;
	//cout << pArray[index]->sequenceCode ;

	sAge = stoi(data.substr(49,3)) ;
	pArray[index]-> age       	 	= sAge ;
	//cout << pArray[index]->age ;
	//cout << endl ;

}
