//============================================================================
// Name        : 9-11_Structures.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Course
{
	int numUnits ;
	string name ;
	string location ;
	int startTime ;
	string instructior;
};

struct Student	// ADT - Abstract Data Type
{
	int studentID ;
	float gpa ;
	string nameF ;
	string nameL ;
	string nameM ;
	int	age ;
	string course [10] ;
	Course theCourse ;

};

int main()
{
	int i ;
	float f ;

	Student paul ;
	Student mary ;

	paul.studentID = 12345 ;
	mary.studentID = 45678 ;

	paul.course[4] = "comsc 200" ;

	Student comsc200 [30] ;

	comsc200[3].studentID = 34567 ;
	comsc200[4].course[4] = "eng1303";

	Student *p ;
	p = new Student ;
	(*p).studentID = 12678 ;
	p->studentID = 34590;

	paul.theCourse.name = "comsc200" ;

	return 0;
}
