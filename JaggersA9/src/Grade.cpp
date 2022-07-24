/*
 * Grade.cpp
 *
 *  Created on: Dec 7, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include <iomanip>
#include "Grade.h"
using namespace std;

//member functions
	void Grade :: gradeHeader()
	{
		cout << setw(25) << "Department Abbreviation"
			 << setw(15) << "Course Number"
			 << setw(14) << "Credit Hours"
			 << setw(7)  << "Grade"
			 << "\n---------------------------------------------------------------\n" ;
	}

	void Grade :: displayGrade()
	{
		cout << setw(15) << deptAbrv
			 << setw(21) << courseNum
			 << setw(13) << creditHours
			 << setw(10)  << grade << endl;
	}

	int Grade :: gtov()
	{
		int value ;

		switch (grade)
		{
			case 'A' : value = 4 ;
									break;
			case 'B' : value = 3 ;
									break;
			case 'C' : value = 2 ;
									break;
			case 'D' : value = 1 ;
									break;
			case 'F' : value = 0 ;
									break;
			default  : value = -1 ;
					   cout << "\nNot a grade, try again\n " ;
									break;
		}

		return value ;
	}
