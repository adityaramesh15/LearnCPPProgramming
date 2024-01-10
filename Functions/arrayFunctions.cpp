#include <iostream>
#include <cstdlib>
#include <ctime>

void printArray(int input[], int size = 0);
void zeroArray(int input[], int size = 0);
void fillArray(int input[], int size=0);

int main() {
	/*
		When arrays are passed into a function — a reference to the first memory address is given. The entire array is not copied over
		int function(int numbers[]);
		
		As such, there is no information about the length of the array. That must be calulated or inputted.

		Remember that the reference is given, so the function can change the contents of the array.
	*/

	int numbers[5] = {1, 2, 3, 4, 5};
	printArray(numbers, 5);
	std::cout << std::endl;
	zeroArray(numbers, 5);
	printArray(numbers, 5);
	std::cout << std::endl;
	fillArray(numbers, 5);
	printArray(numbers, 5);
	std::cout << std::endl;
	
	return 0;
}

void printArray(const int input[], int size){ //Using const so the area is read only.
	for(int i=0; i<size; i ++){
		std::cout << input[i] << " ";
	}
}

void zeroArray(int input[], int size) {
	for(int i = 0; i < size; i++) {
		input[i] = 0;
	}
}

void fillArray(int input[],int size){
	srand(time(NULL));
	for(int i = 0; i < size; i++) {
		int randomNum = rand() % 10;
		input[i] = randomNum;
	}
}




