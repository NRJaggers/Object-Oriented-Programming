#include "ProduceItem.hpp"
#include <string>
#include <iostream>
using namespace std;

bool ProduceItem::getOrganic(){return organic;}
char ProduceItem::getPricingUnit(){return pricingUnit;}
float ProduceItem::getPricePerUnit(){return pricePerUnit;}
bool ProduceItem::getRefrigRequired(){return refrigRequired;}
void ProduceItem::setOrganic(bool b){organic = b;}
void ProduceItem::setPricingUnit(char c){pricingUnit = c;}
void ProduceItem::setPricePerUnit(float p){pricePerUnit = p;}
void ProduceItem::setRefrigRequired(bool r)
{
	refrigRequired = r;
}
ProduceItem::ProduceItem()
	{
//	cout << "in ProduceItem constructor" << endl;
	organic=false;
	pricingUnit='P';
	pricePerUnit=0.0;
	refrigRequired=false;
	}
ProduceItem::~ProduceItem()
	{
//	cout << "in ProduceItem destructor" << endl;
	}
