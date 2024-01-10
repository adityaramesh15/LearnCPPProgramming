#include <iostream>
#include <string>
// using namespace std; would remove the need for writing std every time.

int main() {
    int num = 5;
    std::cout << "Number is " << num << "." << std::endl; //endline is not automatically ended ("\n" also works).
    std::cout << "Enter any changes to number (or same if not): ";
    std::cin >> num;
    std::cout << "The current number is " << num << std::endl; 


    std::string name;
    int age;

    std::cout << "What is your name and age: ";
    std::cin >> name >> age; //Daisy chaining inputs in succession so long as enter is not pressed. 
    std::cout << "Your name is " << name << " and your age is " << age << "!" << std::endl; //inputted values must be of respective type.

    return 0;
}