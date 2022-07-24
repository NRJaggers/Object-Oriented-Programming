//============================================================================
// Name        : 9-9_Static&Dynamic Varibales.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	//Case 1 - Static ints
		int x;
		x = 5 ;


	//Case 2 - Static Array
		int array[10];
		array[5] = 3 ;

	//Case 3 - Dynamic alloc of single int

		int *p ;
		p = new int ;

	//Case 4 - Dynamic alloc of array of int

		int * pp;
		pp = new int [100] ;
		pp[37] = 55 ;

	//Case 5 - Array of pointers pointing to ints

		int *aa [100] ;

		aa[0] = new int ;
		aa[1] = new int ;
		aa[2] = new int ;

		for (int i = 0; i < 100 ; i++)
		{
			aa[i] = new int ;
		}

	//

	return 0;
}
