#include <iostream>
using namespace std;

int main() {
	int num{5};
	int *pNum {nullptr};

	pNum = &num;
	cout << "The number has value: " << num << endl;
	cout << "The pointer points to value: " << *pNum << endl;
	cout << "The number variable has memory address: " << &num << endl;
	cout << "The pointer points to memory address: " << pNum << endl;
	cout << "The pointer itself has memory address: " << &pNum << endl;
	cout << "The size of the number in bytes is: " << sizeof(num) << endl;

	return 0;
}
