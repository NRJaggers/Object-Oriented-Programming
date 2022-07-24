//============================================================================
// Name        : 9-16_output.cpp
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

int main() {

	ofstream outputFile ;
		outputFile.open("C:/Code Stuff/Eclipse/Comsci 200/9-16_output Files/textFile.txt", ios::out) ;
		if (!outputFile.is_open())
		{
			cout << "output file open failure" << endl ;

			// reasons for failure:
			//		invalid file path
			//		file locked
			//		hardware issues aka I/O error (peanut butter on the disk)
			return 4 ;
		}

	int * p = NULL ;
	int a ;
	float f ;
	p = &a ;
	//p = &f ; // will not work, p is a int pointer, must be cast
	p = reinterpret_cast<int *>(&f) ; // this will work

	//	char inputString[20];
	//	cout << "enter a string" << endl ;
	//	cin  >> inputString ;
	//	outputFile.write(inputString, sizeof(inputString));

	string inputString ;
	cout << "enter a string: \n" ;
	cin  >> inputString ;

	// strings do not work well with write
	// prints out all contents of string object, not just charcters
	outputFile.write(reinterpret_cast<char*>(&inputString), sizeof(inputString));

	// this will just print out the characters of the string
	outputFile << endl << inputString << endl ;

	cout << "\n\nProgram Terminated\n";

	return 0;
}
