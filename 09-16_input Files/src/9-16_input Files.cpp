//============================================================================
// Name        : 9-16_Files.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
//#include <algorithm>
using namespace std;

int main() {

	ifstream inputFile ;
	inputFile.open("C:/Code Stuff/Eclipse/Comsci 200/9-16_Files/textFile.txt", ios::in | ios :: binary) ;
	if (!inputFile.is_open())
	{
		cout << "input file open failure" << endl ;

		// reasons for failure:
		//		invalid file path
		//		file locked
		//		hardware issues aka I/O error (peanut butter on the disk)
		return 4 ;
	}

	int a, b, c ;
	inputFile >> a >> b >> c ;

	string thestring ;
	getline(inputFile, thestring, '\n') ; // text file = .txt

	// read
	char inputRecord[2300] ;
	inputFile.read(inputRecord,sizeof(inputRecord)) ;

	char inputRecordError[2100] ;					// will result in loss of data
		inputFile.read(inputRecordError,2300) ;		// storage area is smaller than read in value

	string inputRecordString ;						// cannot do this
	inputFile.read(inputRecordString,2300) ;		// read is a function that works with char
													// continued on output Files


	return 0;
}
