#include <iostream>
#include <iomanip>
#include <vector>


int main() {
	// Basic for each loop
	// Using auto keyword allows for automatic type casting

	std::vector <int> dates {10, 15, 25, 28};
	for(const auto n: dates) {
		std::cout << n << std::endl;
	}

	double value{2938.8723};
	std::cout <<std::fixed << std::setprecision(1); //sets the decimal to one place
	double newValue = value / 2;
	std::cout << "This is the value with one decimal place: " << newValue << std::endl;

	
}
