#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi {3.141592};

int addNumbers(int x, int y);
double circleArea(double radius);

int main() {
	int numOne = 5;
	int numTwo = 10;
	int result = addNumbers(numOne, numTwo);
	double area = circleArea(numOne);

	cout << result << endl;
	cout << fixed << setprecision(2) << area << endl;


	return 0;
}


int addNumbers(int x, int y) {
	return (x+y);
}

double circleArea(double radius){
	return pow(radius, 2) * pi; 
}

