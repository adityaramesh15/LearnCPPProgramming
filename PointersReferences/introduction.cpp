#include <iostream>
#include <string>
using namespace std;

int main() {

	int num = 5;
	int *pNum {nullptr};
	pNum = &num;

	cout << "Value of num: " << num << endl;
	cout << "Pointer points to value: " << *pNum << endl;
	cout << "Address of num: " << &num << endl;
	cout << "Value of pNum: " << pNum << endl;
	cout << "The pointer has an address: " << &pNum << endl;
	cout << "The size of num is: " << sizeof(num) << endl;
 	
	cout << endl << endl;

	const char *test = "Hello There";
	cout << test << endl;

	cout << endl << endl;

	std::string name = "Aditya"; //memory is already allocated so no need for dynamic memory assignment
	std::string *pName = &name;
	cout << name << endl; 

	

	return 0;
}
