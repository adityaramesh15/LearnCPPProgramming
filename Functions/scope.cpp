#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

void printValues(const std::vector<int> &values);

int main() {
	std::vector <int> values (5,0);
	int x = 0;
	while(x < 5) {
		
		srand(time(NULL));	
		for(int i = 0; i < 5; i++) {
			values.at(i) = rand() % 10;
		}
		printValues(values);
		x++;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	return 0;
}	

void printValues(const std::vector<int> &values){
	static int count = 0;
	for(auto n: values) {
		std::cout << n << " ";
	}
	std::cout << "This function has been called " << ++count << " times." <<std::endl;
}
