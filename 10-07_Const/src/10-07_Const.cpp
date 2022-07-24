//============================================================================
// Name        : 10-07_.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "VALUE.cpp"
using namespace std;

//const int VALUE = 7 ; 	// "global" constant
// included from cpp

class xyz
{
private:
	int r ;
	int t ;
	int y ;

public:
	int xyzfunc(int a, int b, int c) const	// const wont allow changing of any members
{
		//r = a ;		//error
		//t = b ;		//error
		//y = c ;		//error

		a = r ;		//if define a as "const int a" will result in error
		b = t ;		//if define a as "const int b" will result in error
		c = y ;		//if define a as "const int c" will result in error
		return 0 ;
}

};

void myfunc1(int) ;
void myfunc2(const int) ;
void myfunc3(const int & ) ;

int main()
{
	//VALUE = 3 ;		// results in error
						//"error: assignment of read-only variable 'VALUE'"
	cout << VALUE << endl ;

	const int VALUE2 = 44 ;

	myfunc1(VALUE) ;
	//myfunc2(VALUE) ;	//error
	myfunc3(VALUE) ;

	// const is applied to the operand on the immediate left

//case 1
	int * const y = new int ;		//const pointer named y to a variable int
	//y = new int ;					//results in error

	int i = 5 ;
	int * const q = &i ;
	//i - 2
	*q = *q - 2 ;
	//x++ ;						    //error

//case 2
	const int * x ;					//variable pointer named x to a const int
	x = &i ;
	x = new int ;
	//*x = *x + 1 ;					//error
	int * p ;
	*p = *x ;
	*p = 8 ;

//case 3
	int const * const z = new int ; //const pointer to a const int

	return 0;
}

void myfunc1(int x)
{
	x++ ;

	return;
}

/*void myfunc2(const int x)			// results in error, function wont change value of x
{									// Will work if const is passed by reference
	x++ ;

	return;
}
*/

void myfunc3(const int & x)
{

	return;
}
