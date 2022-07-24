// GroceryItem.hpp
#ifndef GROCERYITEM_HPP_
#define GROCERYITEM_HPP_
using namespace std;
#include <string>
class GroceryItem
{

private:
	 string itemUPC;
	 string itemDesc;
	 int itemQOH;
	 float itemCost;
	 float itemSellingPrice;
public:
	 string itemCommonName;

// setters
	 void setItemUPC(string);
	 void setItemDesc(string);
	 void setItemQOH(int);
	 void setItemCost(float);
	 void setItemSellingPrice(float);

// getters
	 string getItemUPC();
	 string getItemDesc();
	 int getItemQOH();
	 float getItemCost();
	 float getItemSellingPrice();

// general member functions
	 float calcInventoryValue(); // returns value in dollars, qoh * cost
	 float calcMargin(); // returns item's gross margin
	 float calcHighEndStoreMargin(float);

// constructor
	 GroceryItem(); // default
	 GroceryItem(string);
	 GroceryItem(float, float);

// destructor
	 ~GroceryItem();

// operator overload
	 GroceryItem operator + (GroceryItem &);
	 bool operator < (GroceryItem &);

};
#endif /* GROCERYITEM_HPP_ */
