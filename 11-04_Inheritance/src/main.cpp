using namespace std;
#include <iostream>
#include <string>
#include "GroceryItem.hpp"
#include "ProduceItem.hpp"
void displayGroceryItem(GroceryItem);
void displayProduceItem(ProduceItem);
int main()
{
	GroceryItem milk;
	milk.setItemDesc("milk");
	milk.setItemQOH(100);

	ProduceItem organicRomaineLettuce;
	organicRomaineLettuce.setItemDesc("Organic Romaine Lettuce");
	organicRomaineLettuce.setItemQOH(35);
	organicRomaineLettuce.setOrganic(true);
	organicRomaineLettuce.setRefrigRequired(true);
	organicRomaineLettuce.setPricingUnit('p');		// p=per package
	organicRomaineLettuce.setPricePerUnit(2.99);

	cout << "milk" << endl;
	displayGroceryItem(milk);					// works as expected
	cout << "lettuce" << endl;
	displayProduceItem(organicRomaineLettuce);	// works as expected
	displayGroceryItem(organicRomaineLettuce);	// also works...able to go towards top of hierarchy


	return 0;
}
void displayGroceryItem(GroceryItem g)
{
	cout << "data for GroceryItem object: name and QOH -- " << g.getItemDesc() << "," << g.getItemQOH() << endl;
	return;
}
void displayProduceItem(ProduceItem p)
{
	cout << "data for ProduceItem object: name and QOH -- " << p.getItemDesc() << "," << p.getItemQOH() << endl;
	cout << "organic, refrig -- " << p.getOrganic() << "," << p.getRefrigRequired() << endl;
	cout << "pricing unit, price per unit -- " << p.getPricingUnit() << "," << p.getPricePerUnit() << endl;
	return;
}
