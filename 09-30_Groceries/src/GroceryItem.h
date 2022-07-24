/*
 * GroceryItem.h
 *
 *  Created on: Sep 30, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
using namespace std;

#ifndef GROCERYITEM_H_
#define GROCERYITEM_H_

class GroceryItem
{
private:
	string itemUPC;
	string itemDesc;
	int	   itemQOH;
	float  itemCost;
	float  itemSellingPrice;
public:
	string itemCommonName;
	float  calcInventoryValue();
	float  calcMargin();
	float  calcHighEndStoreMargin(float);

//setters
	void  setQOH(int) ;
	void  setItemCost(float) ;

//getters
	int   getQOH() ;
	float getItemCost() ;
};

#endif /* GROCERYITEM_H_ */
