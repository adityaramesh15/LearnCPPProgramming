#include <iostream>
using namespace std;

int main() {
	int num;
	int value = 15;


	cout << "Enter a number: ";
	cin >> num;

	if(num == 15) {
		cout << "That's Aditya's favorite number also!" << endl;
	} else {
		cout << "Aditya has a different favorite number." << endl;
	}

	vector <int> scores {100, 95, 97, 100, 99};

	int repeat{0};

	for(int n: scores) {
		if(n == 100){
			repeat++;
		}
	}

	if (repeat > 1) {
		cout << "Yay, multiple 100s!" << endl;
	}

}
