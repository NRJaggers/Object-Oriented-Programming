/*
 * GroceryItem.cpp
 */
#include "GroceryItem.hpp"
#include <iostream>
using namespace std;
#include <string>

// setters

void GroceryItem::setItemUPC(string upc)
{
	itemUPC = upc;
	cout << "hello" << endl;
}
void GroceryItem::setItemDesc(string desc)
{
	itemDesc = desc;
}
void GroceryItem::setItemQOH(int qoh){itemQOH = qoh;}
void GroceryItem::setItemCost(float cost)
{
	itemCost = cost;
}
void GroceryItem::setItemSellingPrice(float price)
{
	itemSellingPrice = price;
}
// getters

string GroceryItem::getItemUPC()
{
	return itemUPC;
}
string GroceryItem::getItemDesc()
{
return itemDesc;
}
int GroceryItem::getItemQOH()
{
	return itemQOH;
}
float GroceryItem::getItemCost()
{
	return itemCost;
}
float GroceryItem::getItemSellingPrice()
{
	return itemSellingPrice;
}

// method functions

float GroceryItem::calcInventoryValue()
{
	return itemQOH * itemCost;
}
float GroceryItem::calcMargin()
{
	return itemSellingPrice - itemCost;
}
float GroceryItem::calcHighEndStoreMargin(float moneyFactor)
{
	return (itemSellingPrice - itemCost) * moneyFactor;
}
GroceryItem::GroceryItem()
{
//	cout << "in GroceryItem default constructor" << endl;
	itemUPC="00000";
	itemDesc=" ";
	itemQOH=0;
	itemCost=0.0;
	itemSellingPrice=0.0;
}
GroceryItem::GroceryItem(string upc, string desc, int qoh, float cost, float sell)
{
//	cout << "in GroceryItem constructor" << endl;
	itemUPC=upc;
	itemDesc=desc;
	itemQOH=qoh;
	itemCost=cost;
	itemSellingPrice=sell;
}
GroceryItem::~GroceryItem()
{
//	cout << "in GroceryItem destructor" << endl;
}
void GroceryItem::displayItem()
{
	cout << "in GroceryItem::displayItem" << endl;
	cout << "itemDesc = " << this->getItemDesc() << " producePricingUnit = " << this->getItemQOH() << endl;
};

