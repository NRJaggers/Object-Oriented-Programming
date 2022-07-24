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
	template <class varType>
	string200<varType> :: string200()
		{
			size = 100;
			k = new varType[size] ;
		}

	template <class varType>
	string200<varType> :: string200(int userSize)
		{
			size = userSize ;
			k = new varType[size] ;
		}

//member functions


//overloads
	template <class varType>
	varType& string200<varType> :: operator[](int element)
		{
			string errorMsg ;
			if((element < 0) or (element >= size))
				{
					errorMsg = "Error, element " + to_string(element) + " is out of bounds.\n" ;
					errorMsg += "Please select a number between 0-" +to_string(size-1) ;
					throw errorMsg ;
				}

			return k[element] ;
		}

//destructors
	template <class varType>
	string200<varType> :: ~string200()
		{
			delete[] k ;
		}
