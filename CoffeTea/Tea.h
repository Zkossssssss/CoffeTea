#pragma once
#include "CaffeineBeverage.h"
class Tea : public CaffeineBeverage
{
public:
	void prepareRecipe();

private:
	
	void steepTeaBag();
	
	void addLemon();
};

