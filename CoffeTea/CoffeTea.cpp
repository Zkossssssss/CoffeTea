#include <iostream>
#include "Coffee.h"
#include "Tea.h"

int main()
{
	Coffee* myCoffe = new Coffee();
	Tea* myTea = new Tea();

	myCoffe->prepareRecipe();
	std::cout << "\n---------/n";
	myTea->prepareRecipe();
}