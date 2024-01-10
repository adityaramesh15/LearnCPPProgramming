#include <iostream>

int main() {
    int favNum; 

    std::cout << "Enter your favorite number: ";
    std::cin >> favNum;
    std::cout << "Amazing! That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favNum << " is my favorite number!" << std::endl;

    return 0;
}