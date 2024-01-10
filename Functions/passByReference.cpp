#include <iostream>
using namespace std;

void scaleNumber(int &num, double scale);
void addPrefix(string &name, string prefix);

int main() {
	int num;
	double scale;
	string name;
	string prefix;
	
	cout << "What is your number: ";
	cin >> num;
	cout << "How much do you want it scaled: ";
	cin >> scale;
	cout << "Your number was " << num << " and is now ";
	scaleNumber(num, scale);
	cout << num << endl;
	
	cout << "What is your name: ";
	cin >> name;
	cout << "What prefix will you add: ";
	cin >> prefix;
	addPrefix(name, prefix); 
	cout << "Your name is now: " << name << endl;
	return 0;
}

void scaleNumber(int &num, double scale){
	num *= scale;
}


void addPrefix(string &name, string prefix) {
	name = prefix + ". " + name;
}
