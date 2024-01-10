#include <iostream>
#include <string>

std::string greeting(std::string name);

int main() {
	std::string name;

	std::cout << "Enter your name: ";
	getline(std::cin, name);
	
	std::cout << greeting(name) << std::endl; 


	return 0;
}

std::string greeting(std::string name) {
	return "Hello " + name + "!";
}
