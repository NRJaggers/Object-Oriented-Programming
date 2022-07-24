//============================================================================
// Name        : Essentials.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a ;
	cout << "a = " << a << endl;
	cout << "address of a = " << &a << endl;

	int * aa ;
	aa = new int ; // assigning contents to variable (allocating memory to aa)
	cout << "aa = " << aa << endl;
	cout << "address of aa = " << &aa << endl; //address to variable aa (memory location of variable)

	*aa = 5 ; // assigning a value allocated memory (the contents of aa)
	cout << "contents of new int = " << *aa << endl;

	return 0;
}
