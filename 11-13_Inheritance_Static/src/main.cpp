// inheritance and VF part 1 - static binding

using namespace std;
#include <iostream>
#include <string>
#include "GroceryItem.hpp"
#include "ProduceItem.hpp"
void displayGroceryItem(GroceryItem);
void displayProduceItem(ProduceItem);
void displayDairyItem(DairyItem);
void intermediateFunction (GroceryItem &);
void intermediateFunction2 (ProduceItem &);
int main()
{

	GroceryItem canOfPeas ("peasUPC","peas, can, 7 oz", 12, .55, .95);
	ProduceItem romaineLettuce ("lettuceUPC","lettuce, romaine",5,2.05,3.49,false,false,'p',4.50);
	DairyItem milk ("milkUPC","milk, quart, grade A", 24, 1.25, 2.50, 'l',3.50);

	cout <<"first displays" << endl;
	canOfPeas.displayItem ();
	romaineLettuce.displayItem ();
	milk.displayItem ();

	cout <<"second displays" << endl;
	intermediateFunction (canOfPeas);
	intermediateFunction (romaineLettuce);
	intermediateFunction (milk);

	cout <<"third displays" << endl;
//	intermediateFunction2 (canOfPeas);			// intermediate function 2 takes a produce item
	intermediateFunction2 (romaineLettuce);
//	intermediateFunction2 (milk);

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
void intermediateFunction2 (ProduceItem &p)
{
	p.displayItem();
}
