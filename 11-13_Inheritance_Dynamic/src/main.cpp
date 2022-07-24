// inheritance and VF part 2 - dynamic binding

using namespace std;
#include <iostream>
#include <string>
#include "GroceryItem.hpp"
#include "ProduceItem.hpp"
void displayGroceryItem(GroceryItem);
void displayProduceItem(ProduceItem);
void displayDairyItem(DairyItem);
void intermediateFunction (GroceryItem &);
int main()
{
//****part 1 - dynamically create derived objects using base class pointers
//****and test VF
	GroceryItem * gPtrs[10];
	int i;
	for(i=0;i<10;i++)
	{
		if(i%2 == 0)
		{
			gPtrs[i]=new ProduceItem(to_string(i),"produce"+to_string(i),1,1.0, 1.25, false, false,'p',1.50);
		}
		else
		{
			gPtrs[i]=new DairyItem(to_string(i),"dairy"+to_string(i),1,1.0,1.25,'g',1.50);
		}
	}
//	cout << gPtrs[0]->getItemDesc() << endl;	// can get groceryitem members
//	cout << gPtrs[1]->getItemDesc() << endl;
//	cout << gPtrs[0]->getProducePricingUnit() << endl;	// but not produce or dairy because gptr is of
														// type GroceryItem
														// (going down is not permitted)
														// could have "p" or "d" flag in groceryitem which
														// tells us what to do

// Say I want to loop through gPtrs calculating or displaying Produce and Dairy - use VF
// look at displayItem
	for(i=0;i<10;i++)
	{
		gPtrs[i]->displayItem();
	}
// now delete to test the destructors
	for(i=0;i<10;i++)
	{
		delete gPtrs[i];
	}
//***** part 2 pass static objects to VFs
//*****
	ProduceItem p (to_string(100),"produce"+to_string(100),1,1.0, 1.25, false, false,'p',1.50);
	DairyItem d (to_string(200),"dairy"+to_string(200),1,1.0,1.25,'g',1.50);
	cout << endl << "testing static variables with VF" << endl;
	intermediateFunction (p);
	intermediateFunction (d);

//***** part 3 static objects to non-VF
	cout << endl << "testing static variables with non-VF" << endl;
	displayGroceryItem (p);
	displayProduceItem (p);
	displayGroceryItem (d);
	displayDairyItem (d);

//	displayProduceItem(d);			// won't compile
//	displayDairyItem(p);			// won't compile
	cout << "using VFs as non-VF functions" << endl;
	p.displayItem();				// works - here we're calling specific functions,
									// there is no dynamic binding taking place
	d.displayItem();

	return 0;
}
void displayGroceryItem(GroceryItem g)
{
	cout << "data for GroceryItem object: name and QOH -- " << g.getItemDesc() << "," << g.getItemQOH() << endl << endl;
	return;
}
void displayProduceItem(ProduceItem p)
{
	cout << "data for ProduceItem object: name and QOH -- " << p.getItemDesc() << "," << p.getItemQOH() << endl;
	cout << "organic, refrig -- " << p.getProduceOrganic() << "," << p.getProduceRefrigRequired() << endl;
	cout << "pricing unit, price per unit -- " << p.getProducePricingUnit() << ",";
	cout << p.getProducePricePerUnit() << endl << endl;
	return;
}
void displayDairyItem(DairyItem d)
{
	cout << "data for DairyItem object: name and QOH -- " << d.getItemDesc() << "," << d.getItemQOH() << endl;
	cout << "carton type, price per fl oz -- " << d.getDairyCartonType() << ",";
	cout << d.getDairyPricePerFlOunce() << endl << endl;
	return;
}
void intermediateFunction (GroceryItem &g)
{
	g.displayItem();
}
