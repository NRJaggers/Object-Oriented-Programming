#include "ProduceItem.hpp"
#include "GroceryItem.hpp"
#include <string>
#include <iostream>
using namespace std;

bool ProduceItem::getProduceOrganic(){return produceOrganic;}
char ProduceItem::getProducePricingUnit(){return producePricingUnit;}
float ProduceItem::getProducePricePerUnit(){return producePricePerUnit;}
bool ProduceItem::getProduceRefrigRequired(){return produceRefrigRequired;}
void ProduceItem::setProduceOrganic(bool b){produceOrganic = b;}
void ProduceItem::setProducePricingUnit(char c){producePricingUnit = c;}
void ProduceItem::setProducePricePerUnit(float p){producePricePerUnit = p;}
void ProduceItem::setProduceRefrigRequired(bool r)
{
	produceRefrigRequired = r;
//	this->itemDesc=" ";			 				// let's see what's private
//	this->producePricingUnit='p';
}
	ProduceItem::ProduceItem()
	{
//		cout << "in ProduceItem default constructor" << endl;
		produceOrganic=false;
		producePricingUnit='P';
		producePricePerUnit=0.0;
		produceRefrigRequired=false;
	}
	ProduceItem::ProduceItem(string u, string d, int q, float cost, float sell, bool o, bool r, char unit, float p) : GroceryItem(u, d, q, cost, sell)
	{
//		cout << "in ProduceItem constructor" << endl;
		produceOrganic = o;
		produceRefrigRequired = r;
		producePricingUnit = unit;
		producePricePerUnit = p;
	}
	ProduceItem::~ProduceItem()
	{
//		cout << "in ProduceItem destructor" << endl;
	}

	char DairyItem::getDairyCartonType(){return dairyCartonType;}
	float DairyItem::getDairyPricePerFlOunce(){return dairyPricePerFlOunce;}
	void DairyItem::setDairyCartonType(char c){dairyCartonType = c;}
	void DairyItem::setDairyPricePerFlOunce(float p){dairyPricePerFlOunce = p;}

	DairyItem::DairyItem()
	{
//		cout << "in DairyItem default constructor" << endl;
	}
	DairyItem::DairyItem(string u, string d, int q, float cost, float sell, char unit, float p) : GroceryItem(u, d, q, cost, sell)
	{
//		cout << "in DairyItem constructor" << endl;
		dairyCartonType = unit;
		dairyPricePerFlOunce = p;
	}
	DairyItem::~DairyItem()
	{
//		cout << "in DairyItem destructor" << endl;
	}

	void ProduceItem::displayItem()		// virtual function
	{
		cout << "in ProduceItem::displayItem" << endl;
		cout << "itemDesc = " << this->getItemDesc() << " producePricingUnit = " << this->getProducePricingUnit() << endl;
	}
	void DairyItem::displayItem()		// virtual function
	{
		cout << "in DairyItem::displayItem" << endl;
		cout << "itemDesc = " << this->getItemDesc() << " dairyCartonType = " << this->getDairyCartonType() << endl;
	}
