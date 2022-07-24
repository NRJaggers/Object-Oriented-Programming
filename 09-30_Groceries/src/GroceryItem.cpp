/*
 * GroceryItem.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: Nathan Jaggers
 */

#include "GroceryItem.h"

float GroceryItem :: calcInventoryValue()
{
	return (itemQOH * itemCost) ;
}
float GroceryItem :: calcMargin()
{
	return (itemSellingPrice - itemCost) ;
}
float GroceryItem :: calcHighEndStoreMargin(float fudgeFactor)
{
	//return (itemSellingPrice - itemCost) * f ;
	return calcMargin() * fudgeFactor ;
}


void  GroceryItem :: setQOH(int quantity)
{
	itemQOH = quantity ;
}
void  GroceryItem :: setItemCost (float cost)
{
	itemCost = cost ;
}
//void  GroceryItem :: setQOH()
//{
//	cout << "Enter amount for quantity on hand \n";
//	cin  >> itemQOH ;
//}
//void  GroceryItem :: setItemCost ()
//{
//	cout << "Enter amount for item cost \n";
//	cin  >> itemCost ;
//}


int   GroceryItem :: getQOH()
{
	return itemQOH ;
}
float GroceryItem :: getItemCost()
{
	return itemCost ;
}
