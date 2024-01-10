#include <iostream>

unsigned long long factorial(unsigned long long n);


int main() {

	std::cout << "The factorial of 8 is: " << factorial(8) << std::endl;

	return 0;
}


unsigned long long factorial(unsigned long long n){
	if(n == 0) {
		return 1;
	}
	return n * factorial(n-1);
}
