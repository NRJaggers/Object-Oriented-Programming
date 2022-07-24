//============================================================================
// Name        : 9-4_Memory Review.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int *p ;

	p = new int ;

	*p = 5 ;

	cout << p << endl ;
	cout << *p << endl ;

	p = 0 ; //page fault, exit value blows up
	*p = 34 ;

	cout << p << endl ; //results wont be displayed
	cout << *p ;

	return 0;
}
