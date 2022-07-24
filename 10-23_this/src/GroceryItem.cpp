/*
 * GroceryItem.cpp
 */
#include "GroceryItem.hpp"

#include <iostream>

 // setters
void GroceryItem::setItemUPC(string upc) {
  itemUPC = upc;
}
void GroceryItem::setItemDesc(string desc) {
  itemDesc = desc;
}
void GroceryItem::setItemQOH(int qoh) {
  itemQOH = qoh;
}
void GroceryItem::setItemCost(float cost) {
  itemCost = cost;
}
void GroceryItem::setItemSellingPrice(float price) {
  itemSellingPrice = price;
}

// getters
string GroceryItem::getItemUPC() {
  return itemUPC;
}
string GroceryItem::getItemDesc() {
  return itemDesc;
}
int GroceryItem::getItemQOH() {
  return itemQOH;
}
float GroceryItem::getItemCost() {
  return itemCost;
}
float GroceryItem::getItemSellingPrice() {
  return itemSellingPrice;
}

// method functions
float GroceryItem::calcInventoryValue() {
  return itemQOH * itemCost;
}
float GroceryItem::calcMargin() {
  return itemSellingPrice - itemCost;
}
float GroceryItem::calcHighEndStoreMargin(float moneyFactor) {
  return (itemSellingPrice - itemCost) * moneyFactor;
}

// constructors
GroceryItem::GroceryItem() {
  itemUPC = "00000";
  itemDesc = " ";
  itemQOH = 0;
  itemCost = 0.0;
  itemSellingPrice = 0.0;
}
GroceryItem::GroceryItem(string desc) {
  itemDesc = desc;
  itemCommonName = "default name " + desc;
}
GroceryItem::GroceryItem(float c, float sp) {
  itemCost = c;
  itemSellingPrice = sp;
}
GroceryItem::~GroceryItem() {}

// operator overloading - "add corresponding"
GroceryItem GroceryItem::operator + (GroceryItem & r) // a+b - this adds b to a. nothing else.
{
  //"this" is a keyword. It is a pointer that refers to the subject of the function.
  this->itemQOH 		 = this->itemQOH + r.itemQOH ;
  this->itemCost 		 = this->itemCost + r.itemCost ;
  this->itemSellingPrice = this->itemSellingPrice + r.itemSellingPrice ;

  return *this ;

}

bool GroceryItem::operator < (GroceryItem &r)
{
	if (this->itemQOH < r.itemQOH)
		return true ;
	else
		return false ;
}


