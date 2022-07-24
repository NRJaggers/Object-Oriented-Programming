//============================================================================
// Name        : 10-2_Constructor&Destructor.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GroceryItem.h"
using namespace std;

int main()
{
//static objects
	GroceryItem milk ;
	GroceryItem eggs ;

	float iValue, iMargin ;

	milk.itemCommonName = "Milk" ;
	cout << milk.itemCommonName << endl;

	milk.setQOH(10);
	milk.setItemCost(2.50);
	iValue = milk.calcInventoryValue() ;
	cout << iValue << " " << milk.getQOH() << " " << milk.getItemCost() << endl;

//static array of objects
	float f ;
	GroceryItem tomatoes[41];
	f = tomatoes[3].calcMargin() ;

//dynamic object
	GroceryItem * g ;
	g = new GroceryItem ;
	g -> calcMargin() ;

//dynamic array of objects
	GroceryItem * h ;
	h = new GroceryItem [5000] ;
	h[34].calcMargin() ;

//pointer array with dynamic allocation
	GroceryItem * pp[100] ;
	pp[0] = new GroceryItem ;
	pp[0] -> calcMargin();



	return 0;
}
