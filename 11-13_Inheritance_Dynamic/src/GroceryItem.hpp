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
		virtual void displayItem();			// vf defined in base class
		virtual ~GroceryItem();				// virtual destructor required
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
};
#endif /* GROCERYITEM_HPP_ */
