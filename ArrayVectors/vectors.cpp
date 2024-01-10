#include <iostream>
#include <vector>

int main() {
    /*
        Vectors can be dynamically sized
        Need to include <vector>
        Stored contiguously in memory so can access using element subscripts []. (Note: if using this method, no bounds checking)
        Elements are auto initialized to 0.


    */

    std::vector <char> consonants (21); //vector of chars that contain 5 values. 
    std::vector <int> test_scores; //vector of ints that contain 10 values — automatically set to 0.

    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; //initialize with values. 
    std::vector <double> highTemp (365, 80.0); //initialize with (size, initial values for all elements)

    std::vector <int> scores {100, 95, 99, 87, 88};
    std::cout << "first value is " << scores[0] << std::endl; //This way has no bounds checking.
    std::cout << "second value is " << scores.at(1) << std::endl; //the .at function has error checking and gives you element values. 
    
    scores.at(0) = 90; //This is assignment
    scores.push_back(100); //This will append the value 100 to the end as a new addition (dynamic size).

    std::cout << scores.size() << " is the size of the vector.\n"; //.size() gives size.

    std::vector <int> test (100, 0); 
    std::cout << test.size() << " is the size of the second vector.\n";

    std::vector newScores(scores); //creates a copy of scores into newScores
    for(int i = 0;  i < newScores.size(); i++) {
        std::cout << newScores.at(i) << std::endl;
    }

    std::vector <std::vector <int>> twoDimensionalVector;

    

    return 0; 
}