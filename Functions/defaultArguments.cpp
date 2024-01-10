#include <iostream>

double calcCost(double price, double taxRate = 0.06); //Default values must be written in the function prototype.
int main() {
	double baseCost = 100;
	double taxRate = 0.09;

	std::cout << "My total price for something worth " << baseCost << " is " << calcCost(baseCost, taxRate) << std::endl;
	std::cout << "My total price for something worth " << baseCost << " with default taxRate is " << calcCost(baseCost) << std::endl;


	return 0;
}

double calcCost(double price, double taxRate){
	return price * (1 + taxRate);
	//Added a default value of 0.06 which will be passed when taxRate is omitted.
}

