/*
 * GroceryItem.cpp
 *
 *  Created on: Oct 14, 2019
 *      Author: Nathan Jaggers
 */

/*
 * GroceryItem.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: Paul
 */
#include "GroceryItem.h"

float GroceryItem::calcInventoryValue()
{
	return itemQOH * itemCost;
}
float GroceryItem::calcMargin()
{
	return itemSellingPrice - itemCost;
}
float GroceryItem::calcHighEndStoreMargin(float m)
{
//	return (itemSellingPrice - itemCost) * m;
	return calcMargin() * m;
}
void GroceryItem::setItemQOH (int i)
{
	itemQOH = i;
	return;
}
void GroceryItem::setItemCost (float f)
{
	itemCost = f;
	return;
}
void GroceryItem::setPricingHistory(float pH, int month)
{
	pricingHistory[month-1] = pH ;
	return;
}
int GroceryItem::getItemQOH()
{
	return itemQOH;
}
float GroceryItem::getItemCost()
{
	return itemCost;
}
float GroceryItem::getPricingHistory(int month)
{
	return pricingHistory[(month-1)] ;
}



