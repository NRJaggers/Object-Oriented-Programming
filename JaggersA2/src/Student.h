/*
 * Student.h
 *
 *  Created on: Sep 23, 2019
 *      Author: Nathan Jaggers
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

struct Student
{
	string 		firstName		;	// studnet's first name
	char		middleInitial	;	// studnet's middle initial
	string		lastName		;	// studnet's last name
	char		collegeCode		;	// first character of student ID
	int			locationCode	;	// next 2 characters of student ID
	int			sequenceCode	;	// next 6 characters of student ID
	short int 	age				;	// age of student
};

#endif /* STUDENT_H_ */
