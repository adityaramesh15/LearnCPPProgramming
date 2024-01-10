#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "What is your number: ";
	cin >> num;

	switch (num) {
		case 15 :
			cout << "Your number is Aditya's favorite!"<< endl;
			break;
		default:
			cout << "Your number is not Aditya's favorite" << endl;
			break;

	}

	
	//This is an example of ternary operator
	cout << "Enter a new random number: ";
	int newNum;
	cin >> newNum;
	bool isEven{false};
	isEven = (newNum % 2 == 0) ? true : false; 
	cout << "Your number is " << boolalpha << (isEven)  << endl;

}
