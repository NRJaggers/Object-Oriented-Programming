
#ifndef PRODUCEITEM_HPP_
#define PRODUCEITEM_HPP_
#include "GroceryItem.hpp"
#include <string>
class ProduceItem : public GroceryItem
{
private:
	bool organic;
	bool refrigRequired;
	char pricingUnit;
	float pricePerUnit;
public:
	bool getOrganic();
	char getPricingUnit();
	float getPricePerUnit();
	bool getRefrigRequired();
	void setOrganic(bool);
	void setPricingUnit(char);
	void setPricePerUnit(float);
	void setRefrigRequired(bool);
	ProduceItem();
	~ProduceItem();
};

#endif /* PRODUCEITEM_HPP_ */
