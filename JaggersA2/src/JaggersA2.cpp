//============================================================================
// Name        : JaggersA2.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Student.h"
#include "welcome.h"
#include "goodbye.h"
#include "dataTransfer.h"
#include "displayData.h"
#include "displayHeading.h"
#include "ageCalc.h"
using namespace std;

// Global variables
	int arraySize = 100 ;

int main()
{
	//declarations
	Student * studentRecords[arraySize] = {nullptr};
	Student * youngestStudent ;
	char readIn[53] ;
	string stdData ;					// student data
	int stdCount = 0 , prtIndex = 0;		// student count, print index

	//welcome
	welcome() ;

	//open file
	ifstream inputFile ;
	inputFile.open("C:/COMSCI200/a2data.txt");
		if (!inputFile.is_open())		// test if file can be opened
			{
				cout << "There was an error opening the file.\n"
					 << "Please check the file path and \n"
					 << "make sure file is accessible.\n";
				return 1 ;
			}

	//collect data
		while (inputFile.read(readIn,52))
			{
				//!inputFile.eof()
				//inputFile.read(readIn,52) ;
				readIn[52] = '\0' ;
				stdData = readIn ;

				dataTransfer(studentRecords, stdCount, stdData, readIn);

				stdCount++ ;

			}
	inputFile.close() ;

	//display data

	displayHeading() ;
	while (studentRecords[prtIndex] != nullptr)
		{
			displayData(studentRecords,prtIndex) ;
			prtIndex++ ;
		}

	//calculate average age & display results
	cout << "\n\nThe average age of the students is "
		 << ageCalc(studentRecords, youngestStudent)
		 << ".\nWhile the youngest student on file is "
		 << youngestStudent->firstName << " "
		 << youngestStudent->lastName << " who is "
		 << youngestStudent->age << " years old\n" ;

	//clean up and goodbye
	goodbye();

	int i = 0 ;
	while (studentRecords[i] != nullptr)
	{
		delete studentRecords[i] ;
		i++ ;
	}

	return 0;
}

