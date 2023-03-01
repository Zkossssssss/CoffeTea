#include "Tea.h"
#include <iostream>
using namespace std;

void Tea::prepareRecipe()
{
	boilWater();
	steepTeaBag();
	pourInCut();
	addLemon();
}


void Tea::steepTeaBag()
{
	cout << "Steeping the tea" << endl;
}


void Tea::addLemon()
{
	cout << "Adding Lemon" << endl;
}
