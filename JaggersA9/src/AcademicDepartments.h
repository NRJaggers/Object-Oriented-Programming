/*
 * AcademicDepartments.h
 *
 *  Created on: Dec 4, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <map>
using namespace std;

#ifndef ACADEMICDEPARTMENTS_H_
#define ACADEMICDEPARTMENTS_H_

class AcademicDepartments
{
private :

//member variables
	map<string,string> table ;

public :

//constructor
	AcademicDepartments() ;

//member functions
	bool findDeptName (string, string &);

};



#endif /* ACADEMICDEPARTMENTS_H_ */
