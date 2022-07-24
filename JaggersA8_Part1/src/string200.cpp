/*
 * String200.cpp
 *
 *  Created on: Nov 25, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include "string200.h"
using namespace std;


//setters


//getters


//constructors
	string200 :: string200()
		{
			size = 100;
			k = new string[size] ;
		}

	string200 :: string200(int userSize)
		{
			size = userSize ;
			k = new string[size] ;
		}

//member functions


//overloads
	string& string200 :: operator[](int element)
		{
			if((element < 0) or (element >= size))
				{
					cout<< "Error, element " << element << " is out of bounds.\n" ;
					exit(-1) ;
				}

			return k[element] ;
		}

//destructors
	string200 :: ~string200()
		{
			delete[] k ;
		}
