//============================================================================
// Name        : 9-23_Temp.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>		// cstring - characters terminated with a NULL
#include <fstream>
using namespace std;

int main()
{
	/*
	// illustrates problem when dealing with character arrays and termination
	char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char b[5]  = {'1', '2', '3', '4', '5'};

	cout << "length of a: " << sizeof(a) << endl ;
	cout << "strlen of a: " << strlen(a) << endl ;

	cout << "length of b: " << sizeof(b) << endl ;
	cout << "strlen of b: " << strlen(b) << endl ;

	cout << "contents of a: " << a << endl ;
	cout << "contents of b: " << b << endl ;
	*/

	/*
	// illustrates solution by making these arrays c-strings by including null terminator \0
		char a[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};
		char b[6]  = {'1', '2', '3', '4', '5', '\0'};

		cout << "length of a: " << sizeof(a) << endl ;
		cout << "strlen of a: " << strlen(a) << endl ;

		cout << "length of b: " << sizeof(b) << endl ;
		cout << "strlen of b: " << strlen(b) << endl ;

		cout << "contents of a: " << a << endl ;
		cout << "contents of b: " << b << endl ;
	*/

	// when switching from c-string to string, you may do the following
		char a[11] = {'1', '2', '3', '4', '5', '\0'};
		string s ;

		s = a ;		// example of operator overloading
					// only works for c-string -> string, not vice-versa
		cout << "s = " << s << endl ;

		string t ;
		t = s.substr(3,4) ;
		int i  = 0;
		i = stoi(t) ;
		i = stoi(s.substr(3,4)) ;
		cout << "t = " << t << endl ;
		cout << "i = " << i << endl ;

	// when using file functions and you need to convert to string to c-string use the following

		s.c_str() ;		// this will help us avoid the following problem

		ofstream outputFile ;

		// outputFile.write( address of character array , length)
		// logically we want the equivalent of outputFile.write( s, 11 )

		// outputFile.write(s , 11 );	// wont work, s is a string
		// outputFile.write(reinterpret_cast<char *>(s), 11 ); // although you will be throwing a char array, string has a lot more
															   // info than char array and you will get garbage in your input/output

		outputFile.write(s.c_str() , 11 );	// therefore this is the best option



	return 0;
}
