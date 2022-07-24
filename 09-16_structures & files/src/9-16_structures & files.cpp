//============================================================================
// Name        : 9-16_structures.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

struct Student
{
	char nameF[10] ;		// must be char array to use write
	char nameMI[1] ;		// none of these can be strings
	char nameL[20] ;		// problem discussed in output Files project
	char studentID[12] ;		// instead of int and float , all fields will be data type
	char majorCode[6] ;			// char when working with external files
	char tuitionAmount[12] ;	// has to do with slack bytes and how data is read and written
};

void populateStudent(char *, int) ;

int main() {
	ofstream outputFile ;
			outputFile.open("C:/Code Stuff/Eclipse/Comsci 200/9-16_structures & files/textFile.txt", ios::out) ;
			if (!outputFile.is_open())
			{
				cout << "output file open failure" << endl ;

				// reasons for failure:
				//		invalid file path
				//		file locked
				//		hardware issues aka I/O error (peanut butter on the disk)
				return 4 ;
			}

	Student paul ; // populate paul
	cout << "enter first name : " ;
	populateStudent(paul.nameF,sizeof(paul.nameF));
	cout << "enter middle initial : " ;
	populateStudent(paul.nameMI,sizeof(paul.nameMI));
	cout << "enter last name : " ;
	populateStudent(paul.nameL,sizeof(paul.nameL));
	cout << "enter student ID : " ;
	populateStudent(paul.studentID,sizeof(paul.studentID));
	cout << "enter major code : " ;
	populateStudent(paul.majorCode,sizeof(paul.majorCode));
	cout << "enter tuition : " ;
	populateStudent(paul.tuitionAmount,sizeof(paul.tuitionAmount));

	// to convert a string of numbers to numbers, use stoi (string to integer)
	// num = stoi(numString)
	// to convert a char that is a number to a number, use atoi (char to integer)
	// num = atoi(numChar)

	// outputFile.write(paul, sizeof(paul)) ; // cannot do this to write out all data in paul

	outputFile.write(reinterpret_cast<char*>(&paul), sizeof(paul)) ; // can reinterpret and use this to write out data

	return 0;
}

void populateStudent(char * field ,int size)
{
//	int i = 0 ;
//
//	while (i < size and field[i] == '-')
//	{
//		for (int i = 0 ; i < size ; i++)
//			{
//				cin >> field[i] ;
//			}
//	}

}
