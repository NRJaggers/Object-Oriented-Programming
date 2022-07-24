//============================================================================
// Name        : Pointer.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
//	int *a;
//	a = new int ;
//
//	cout << "contents of a " << a << endl; // address in memory
//
//	a = a + 1 ;
//
//	cout << "contents of a " << a << endl; // address in memory incremented by bits held in an integer

//-----------------------------------------------------------------------------------------------------

//	long *a;
//		a = new long ;
//
//		cout << "contents of a " << a << endl; // address in memory
//
//		a = a + 1 ;
//
//		cout << "contents of a " << a << endl; // address in memory incremented by bits held in an long integer

//-----------------------------------------------------------------------------------------------------

//		int *a ;
//		a = new int[1000] ;
//		a[0] = 5; // equivalent to *a=5
//		a[7] = 99;
//
//		int i ;
//		a[i] = 432 ;

//-----------------------------------------------------------------------------------------------------

//		int *a ;
//		a = new int[1000] ;
//		*a = 5 ;
//		a = a + (37*4);
//		*a = 10 ;
//
//		cout << "a[36] = " << *(a-1) << endl;
//		cout << "a[37] = " << *a << endl;

//-----------------------------------------------------------------------------------------------------

//		int *a ;
//		float f ;
//		int i ;
//
//		a = &i ;
//
//		i = i + 1 ;
//
//		*a = *a + 1 ;
//
//		//a = &f ; // not possible, results in error
//
//		float * r ;
//		//r = &i ; // not possible, results in error
//		r = reinterpret_cast<float*>(&i); // this is possible using reinterpret_cast
//
//		*r = i ;
//
//		f = static_cast<float>(i) ;
//		f = static_cast<float>(1)/static_cast<float>(3);
//
//		int * q ;
//		q = new int ;
//		cout << "contents of q = " << q << endl ;
//
//		*q = 10 ;	// will not assign 10 to *q
//		*q++ ;		// increments the pointer q, not *q
//		(*q)++ ;	// increments the *q
//		*q = *q + 1; // same as previous line
//
//		cout << " *q = " << *q << endl;
//		cout << "contents of q after increment = " << q << endl ;
//-----------------------------------------------------------------------------------------------------

	int a[10];
	cout << "address of a[0] = " << &a[0] << endl ;
	cout << "address of a[1] = " << &a[1] << endl ;
	cout << "address of a[2] = " << &a[2] << endl ;

	cout << "address of a = " << a << endl ;
	cout << "address of a = " << &a << endl ;
	cout << "contents of a = " << *a << endl ;

	int * p;
	p = a ;
	// p = &a ;// not allowed

	cout << "address of p = " << p << endl ;

//-----------------------------------------------------------------------------------------------------

	return 0;
}
