/*
 * Grade.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
using namespace std;

#ifndef GRADE_H_
#define GRADE_H_

struct Grade
{
//member variables
	string 	deptAbrv ;
	string 	courseNum;
	int		creditHours;
	char	grade ;

//member functions
	void gradeHeader() ;
	void displayGrade() ;
	int gtov() ;

};



#endif /* GRADE_H_ */
