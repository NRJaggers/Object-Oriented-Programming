/*
 * GroceryItem.h
 *
 *  Created on: Oct 14, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <string>
using namespace std;
#ifndef GROCERYITEM_H
#define GROCERYITEM_H


class GroceryItem
{
private:
	string itemUPC;	//key
	string itemDesc;
	int itemQOH;
	float itemCost;
	float itemSellingPrice;
	float pricingHistory[12];

public:
	string itemCommonName;
	float calcInventoryValue();
	float calcMargin();
	float calcHighEndStoreMargin(float);
// setters
	void setItemQOH (int);
	void setItemCost (float);
	void setPricingHistory(float , int);
// getters
	int getItemQOH();
	float getItemCost();
	float getPricingHistory(int);

};

#endif

