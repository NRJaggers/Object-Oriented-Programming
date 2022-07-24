/*
 * ageCalc.cpp
 *
 *  Created on: Sep 29, 2019
 *      Author: Nathan Jaggers
 */
#include <iostream>
#include "Student.h"
using namespace std;

int  ageCalc (Student * pArray[], Student * &yngStd)
{
	float averageAge = 0 ;
	int counter = 0 , youngest = 999 ;

	while (pArray[counter] != nullptr)
		{
			averageAge+= pArray[counter]->age ;

			if ((pArray[counter]->age) < youngest)
				{
					youngest = pArray[counter]->age ;
					yngStd = pArray[counter] ;
				}

			counter++ ;
		}

	averageAge = (averageAge/counter) ;

	return averageAge ;
}
