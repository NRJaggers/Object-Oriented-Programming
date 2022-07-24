//============================================================================
// Name        : 11-25_Function.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int func1(int, string);
int func1(int, float);

template <class type1>
void func2(type1 &a, type1 &b)
{
	type1 temp;
	temp = a ;
	a = b ;
	b = temp ;
}

int main() {

	int i ;
	float f ;
	string s;
	i = func1(i,s);
	i = func1(i,f);

	int i1, i2 ;
	string s1, s2 ;

	i1 = 3 ;
	i2 = 4 ;

	s1 = "aaa" ;
	s2 = "bbb" ;

	cout << i1 << "\t" << i2 << endl ;
	func2(i1,i2);
	cout << i1 << "\t" << i2 << endl ;
	cout << s1 << "\t" << s2 << endl ;
	func2(s1,s2);
	cout << s1 << "\t" << s2 << endl ;


	return 0;
}

int func1(int i, string s)
{
	cout << "in func1 int string" << endl ;
	return 0 ;
}
int func1(int i, float f)
{
	cout << "in func1 int float" << endl ;
	return 0 ;
}
