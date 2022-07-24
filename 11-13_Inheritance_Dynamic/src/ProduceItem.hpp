
#ifndef PRODUCEITEM_HPP_
#define PRODUCEITEM_HPP_
#include "GroceryItem.hpp"
#include <string>
using namespace std;
class ProduceItem : public GroceryItem
{
private:
	bool produceOrganic;
	bool produceRefrigRequired;
	char producePricingUnit;		// l - per lb, u - per unit, p - per package
	float producePricePerUnit;		// $ per unit
public:
	bool getProduceOrganic();
	char getProducePricingUnit();
	float getProducePricePerUnit();
	bool getProduceRefrigRequired();
	void setProduceOrganic(bool);
	void setProducePricingUnit(char);
	void setProducePricePerUnit(float);
	void setProduceRefrigRequired(bool);
	ProduceItem();
	ProduceItem(string, string, int, float, float, bool, bool, char, float);
	~ProduceItem();
	void displayItem();				// virtual function; overrides same in base class
};
class DairyItem : public GroceryItem
{
private:
	char dairyCartonType;			// p-pint, q-quart, h-half gallon, g-gallon
	float dairyPricePerFlOunce;
public:
	char getDairyCartonType();
	float getDairyPricePerFlOunce();
	void setDairyCartonType(char);
	void setDairyPricePerFlOunce(float);
	DairyItem();
	DairyItem(string, string, int, float, float, char, float);
	~DairyItem();
	void displayItem();				// virtual function; overrides same in base class
};

#endif /* PRODUCEITEM_HPP_ */
