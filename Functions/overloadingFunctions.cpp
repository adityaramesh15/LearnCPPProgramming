#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const double pi {3.141592};

//Though I can overload function arguments, I cannot overload function return types
//int area(int length) would not work

double area(double length, double width);
double area(double radius);


int main() {
	int selection;
	cout << endl << "===================" << endl; 
	cout << "Measure Area:" << endl;
	cout << "1. Rectangle/Square" << endl;
	cout << "2. Circle" << endl;
	cout << "===================" << endl; 
	cout << endl << "Choose which number action you want to happen: "; 
	cin >> selection;
	
	if(selection == 1) {
		double length;
		double width;
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;

		cout << "Your area is: " << area(length, width) << " units." << endl;
		
	} else if (selection == 2 ) {
		double radius;
		cout << "Enter the radius: ";
		cin >> radius;

		cout << "Your area is: " << area(radius) << " units." << endl;

	} else {
		cout << "Bad input — Restart program." << endl;
	}

	return 0;
}

double area(double length, double width) {
	return length * width;
}

double area(double radius) {
	return pow(radius, 2) * pi; 
}
