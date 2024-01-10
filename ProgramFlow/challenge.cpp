#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <char> validInputs {'P', 'A', 'M', 'S', 'L', 'Q'};	
	char input;
	bool validInput = false;
	vector <int> list;
	bool running = true;

	while (running) {
		cout << endl; 
		cout << "====================================" << endl;
		cout << "You have the following menu options:" << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - Add number" << endl;
		cout << "M - Display mean of numbers" << endl;
		cout << "S - Display smallest number" << endl;
		cout << "L - Display largest number" << endl;
		cout << "Q - Quit" << endl;
		cout << "====================================" << endl;
		cout << endl;

		do {
			cout << "Enter your choice: ";
			cin >> input;
			input = toupper(input);

			validInput = find(validInputs.begin(), validInputs.end(), input) != validInputs.end();
			if(validInput == true) {
				break;
			}

			cout << "Unknown Selection, try again" << endl;
		} while (validInput == false);

		switch (input) {
			case 'P': 
				if(list.size() != 0) {
					cout << "[ ";
					for(auto n: list) {
						cout << n << " ";
					}
					cout << "]" << endl;
				} else {
					cout << "The list is empty" << endl;
				}
				break;
			case 'A':
				cout << "What Integer do you want to add: ";
				int temp;
				cin >> temp;
				list.push_back(temp);
				cout << temp << " added." << endl;
				break;
			case 'M':
				if(list.size() != 0) {
					int sum;
					for(auto n: list) {
						sum += n;
					}
					int average = static_cast<double>(sum) / static_cast<double>(list.size());
					cout << "Average of list is: " << average << endl; 
				} else {
					cout << "Unable to calculate mean - no data" << endl;
				}
				break;
			case 'S':
				if(list.size() != 0) {
					int smallest = list.at(0);
					for(auto n: list) {
						if(n < smallest) {
							smallest = n;
						}
					}
					cout << "The smallest number is: " << smallest << endl;
				} else {
					cout << "Unable to determine smallest number - list is empty" << endl;
				}
				break; 
			case 'L': 
				if(list.size() != 0) {
					int largest = list.at(0);
					for(auto n: list) {
						if(n > largest) {
							largest = n;
						}
					}
				cout << "The largest number is: " << largest << endl;
				} else {
					cout << "Unable to determine largest number - list is empty" << endl;
				}
				break; 
			case 'Q': 
				cout << "Goodbye" << endl;
				running = false;
				break; 
			default:
				break;
		}
	}


	return 0;
}
