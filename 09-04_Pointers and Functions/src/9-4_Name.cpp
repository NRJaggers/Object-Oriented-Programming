//============================================================================
// Name        : 9-4_Pointers and Functions.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void func1(int);		// Pass by value
void func2(int &);		// Pass by reference
void func3(int []);		// Arrays in functions are automatically passed by reference
//void func3(int &[]);	// Arrays are already passed by reference, thus this resulting in an error
void func5(int *);		// Address in memory passed by value
void func6(int * &);	// Address in memory passed by reference
void func7(int * []);	// Address in memory passed by reference (because it is an array)

int main()
{
	int t = 88;
	cout << "t = " << t << endl;

	func1(t);
	cout << "t = " << t << endl;

	func2(t);
	cout << "t = " << t << endl;

	int tt[10];
		tt[0] = 1;
	cout << "tt[0] = " << tt[0] << endl;

	func3(tt);
	cout << "tt[0] = " << tt[0] << endl;

	int *p;
	cout << "address of p = " << p << endl;
	func5(p);

	func6(p);
	cout << "address of p = " << p << endl;

	int *pp[100];
	func7(pp);

	return 0;
}

void func1(int a)
{
	a++ ;
	return;
}
void func2(int &a)
{
	a++ ;
	return;
}
void func3(int aa[])
{
	aa[0]++ ;
	return;
}
/*void func4(int &aa[])
{
	aa[0]++ ;
	return;
}*/
void func5(int *q)
{
	cout << "address of q = " << q << endl;

	q = q + 1 ;

	cout << "address of q = " << q << endl;
	return;
}
void func6(int * &q)
{
	cout << "address of q = " << q << endl;

	q = q + 1 ;

	cout << "address of q = " << q << endl;
	return;
}
void func7(int * qq[])
{
	//*qq[3] = 66;

	cout << "address of qq[2] = " << qq[2] << endl ;
	cout << "address of qq[3] = " << qq[3] << endl ;
	qq[2] = qq[2]+1 ;
	cout << "address of qq[2] = " << qq[2] << endl ;
	cout << "address of qq[3] = " << qq[3] << endl ;

	*qq[2] = 77;
	cout << "contents of qq[2] = " << *qq[2] << endl ;
	cout << "contents of qq[3] = " << *qq[3] << endl ;
	return ;
}
