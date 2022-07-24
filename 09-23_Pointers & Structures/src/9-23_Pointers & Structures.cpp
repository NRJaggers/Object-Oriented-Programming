//============================================================================
// Name        : 9-23_Pointers.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct xyz
{
	int a ;
	float b ;
	string c ;
};

int main()
{

//dyn allocation of an array of structures
	xyz *ppp ;
	ppp = new xyz[50] ;
	ppp[44].a = 6 ;

//dyn allocation of individual structs using pointer array
	xyz * ptrArray[50] ; // = {nullptr} will achieve same effect as for loop setting elements as null
	for(int i = 0; i < 50 ; i++)
		{
			//cout << ptrArray[i] << endl;
			ptrArray[i] = nullptr;
			//cout << ptrArray[i] << endl;
		}
	for(int i = 0; i < 45 ; i++)
		{
			ptrArray[i] = new xyz;
		}

	return 0;
}
