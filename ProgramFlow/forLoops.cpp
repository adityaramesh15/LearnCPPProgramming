#include <iostream>

int main() {
	std::vector <int> values(5, 0);
	std::cout <<"Enter 5 numbers separated by space: ";
	std::cin >> values.at(0) >> values.at(1) >> values.at(2) >> values.at(3) >> values.at(4);

	std::cout << std::endl << "Your values are as follows: " << std::endl;

	//using regular for loops
	for (int i = 0; i < values.size(); i++) {
		std::cout << values.at(i) << " ";
	}
	std::cout << std::endl;

	//using for range
	for(int n: values) {
		std::cout << n << " ";
	}

}
