#include "Coffee.h"
#include <iostream>
using namespace std;

void Coffee::prepareRecipe()
{
	
	brewCoffeeGrinds();
	
	addSugarAndMilk();
}



void Coffee::brewCoffeeGrinds()
{
	cout << "Dripping coffee through filter" << endl;
}



void Coffee::addSugarAndMilk()
{
	cout << "Adding sugar and milk" << endl;
}
