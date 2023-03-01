#pragma once
class CaffeineBeverage
{
public:
	virtual void prepareRecipe() = 0;

protected:
	void boilWater();
	void pourInCut();
};

