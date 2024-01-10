#include <iostream>

int main() {
    int numOne{10};
    int numTwo{20};


    /*
        Both the values will now equal 100, but different memory addresses
        numTwo = 100
        numOne = the value of numTwo, but is not a pointer to numTwo. 
    */
    numOne = numTwo = 100; 

    std::cout << "memory address of One is: " << &numOne << std::endl;
    std::cout << "memory address of Two is: " << &numTwo << std::endl;

    /*  
        static_cast operator will cast a value to another type;
        static_cast<type>(value)
        C-style casting of (type) does not have any checks before casting and should not be used as such. 
    */

    double testDouble = 3.4;
    int testInt = static_cast<int>(testDouble);


    /*
        To display the words true / false instead of 0 and 1, use std::boolalpha
        Top turn that off, use std::noboolaplpha    
    */
    
    std::cout << std::endl;
    std::cout << "Without Bool alpha 1 == 2 gives result: " << (1 == 2) << std::endl;
    std::cout << "Adding bool alpha " <<std::boolalpha << "result of 1 == 2 is now: " << (1 == 2) << std::endl;
    std::cout << "Turning it off now " << std::noboolalpha << "meaning result is back to: " << (1 == 2) << std::endl;

    return 0;
}