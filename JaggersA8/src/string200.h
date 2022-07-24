/*
 * String200.h
 *
 *  Created on: Nov 25, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
using namespace std;

#ifndef STRING200_H_
#define STRING200_H_

template <class varType>
class string200
{
	private:
		int size  ; //size of container
		varType *k ; //string pointer
	public:

		//setters


		//getters


		//constructors
			string200();
			string200(int);

		//member functions


		//overloads
			varType& operator[](int) ;

		//destructors
			~string200();

};



#endif /* STRING200_H_ */
