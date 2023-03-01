#pragma once
#include "CaffeineBeverage.h"
class Coffee : public CaffeineBeverage
{
public:
	void prepareRecipe();

private:
	
	void brewCoffeeGrinds();
	
	void addSugarAndMilk();
};

