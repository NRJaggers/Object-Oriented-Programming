/*
 * Student.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <vector>
#include "Grade.h"
using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_

struct Student
{
//member variables
	string 			studentName ;
	string			studentID ;
	vector<Grade> 	studentGrades;

//member functions
	void displayStudent() ;

};



#endif /* STUDENT_H_ */
