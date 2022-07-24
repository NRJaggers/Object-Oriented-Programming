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
void GroceryItem::operator + (GroceryItem & r) // a+b - this adds b to a. nothing else.
{
  itemQOH = itemQOH + r.itemQOH;
  itemCost = itemCost + r.itemCost;
  itemSellingPrice = itemSellingPrice + r.itemSellingPrice;
}
