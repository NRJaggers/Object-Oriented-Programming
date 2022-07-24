// GroceryItem.hpp
#ifndef GROCERYITEM_HPP_
#define GROCERYITEM_HPP_

using namespace std;
#include <string>
class GroceryItem
{
	protected:
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
		float calcInventoryValue();
		float calcMargin();
		float calcHighEndStoreMargin(float);
// constructor
		GroceryItem();
		GroceryItem(string, string, int, float, float);
		~GroceryItem();
// redefined function - present in each class
		void displayItem();

};
#endif /* GROCERYITEM_HPP_ */
