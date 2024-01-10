#include <iostream>
#include <vector> 

int main() {
    // added new change by ramesh
    // added new comment by aditya
    // added by aditya
    // added by ramesh
    int k;
    std::vector <int> vectorOne;
    std::vector <int> vectorTwo;

    vectorOne.push_back(10);//comment

    vectorOne.push_back(20);

    std::cout << "Values of vector one are: " << vectorOne.at(0) << " and " << vectorOne.at(1) << std::endl;
    std::cout << "Size of vector one is " << vectorOne.size() << std::endl; 

    vectorTwo.push_back(100);
    vectorTwo.push_back(200);
    std::cout << "\nValues of vector two are: " << vectorTwo.at(0) << " and " << vectorTwo.at(1) << std::endl;
    std::cout << "Size of vector two is " << vectorTwo.size() << std::endl; 

    std::vector <std::vector <int>> vectorTwoD;
    vectorTwoD.push_back(vectorOne);
    vectorTwoD.push_back(vectorTwo);

    std::cout << std::endl;

    for(int i = 0; i<vectorTwoD.size(); i++) {
        for(int j = 0; j<vectorTwoD.at(i).size(); j++) {
            std::cout << vectorTwoD.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    vectorOne.at(0) = 1000; //This will not change contents of 2D array since no dependencies (just copied values)
    std::cout << std::endl;

    for(int i = 0; i<vectorTwoD.size(); i++) {
        for(int j = 0; j<vectorTwoD.at(i).size(); j++) {
            std::cout << vectorTwoD.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << vectorOne.at(0) << " " << vectorOne.at(1) << std::endl; 


    return 0;
}
