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

 cout << "after initial settings" 	<< endl;
 cout << "eggs itemQOH " 			<< eggs.getItemQOH() << endl;
 cout << "eggs itemCost " 			<< eggs.getItemCost() << endl;
 cout << "eggs itemSellingPrice " 	<< eggs.getItemSellingPrice() << endl;
 cout << "milk itemQOH " 			<< milk.getItemQOH() << endl;
 cout << "milk itemCost " 			<< milk.getItemCost() << endl;
 cout << "milk itemSellingPrice " 	<< milk.getItemSellingPrice() << endl << endl;

 GroceryItem total ;
 total = eggs + milk;

 cout << "after eggs + milk" 		<< endl;
 cout << "eggs itemQOH " 			<< eggs.getItemQOH() << endl;
 cout << "eggs itemCost " 			<< eggs.getItemCost() << endl;
 cout << "eggs itemSellingPrice " 	<< eggs.getItemSellingPrice() << endl;
 cout << "milk itemQOH " 			<< milk.getItemQOH() << endl;
 cout << "milk itemCost " 			<< milk.getItemCost() << endl;
 cout << "milk itemSellingPrice " 	<< milk.getItemSellingPrice() << endl << endl;

 cout << "total itemQOH " 			<< total.getItemQOH() << endl;
 cout << "total itemCost " 			<< total.getItemCost() << endl;
 cout << "total itemSellingPrice " 	<< total.getItemSellingPrice() << endl;

 cout << "true :" << true << endl << "false :" << false << endl ;
 cout << (milk < eggs) << endl ;

return 0;

}
