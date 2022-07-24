//============================================================================
// Name        : 10-16_Operator.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

using namespace std;
#include <iostream>
#include <string>
#include "GroceryItem.hpp"
int main()
{
GroceryItem milk;
GroceryItem eggs;
 milk.setItemQOH(10);
 eggs.setItemQOH(15);
 milk.setItemCost(1.00);
 eggs.setItemCost(2.00);
 milk.setItemSellingPrice(3.00);
 eggs.setItemSellingPrice(4.00);
 cout << "after initial settings" << endl;
 cout << "eggs itemQOH " << eggs.getItemQOH() << endl;
 cout << "eggs itemCost " << eggs.getItemCost() << endl;
 cout << "eggs itemSellingPrice " << eggs.getItemSellingPrice() << endl;
 cout << "milk itemQOH " << milk.getItemQOH() << endl;
 cout << "milk itemCost " << milk.getItemCost() << endl;
 cout << "milk itemSellingPrice " << milk.getItemSellingPrice() << endl << endl;
 eggs + milk; // needs void function
 cout << "after eggs + milk" << endl;
 cout << "eggs itemQOH " << eggs.getItemQOH() << endl;
 cout << "eggs itemCost " << eggs.getItemCost() << endl;
 cout << "eggs itemSellingPrice " << eggs.getItemSellingPrice() << endl;
 cout << "milk itemQOH " << milk.getItemQOH() << endl;
 cout << "milk itemCost " << milk.getItemCost() << endl;
 cout << "milk itemSellingPrice " << milk.getItemSellingPrice() << endl << endl;
return 0;
}
