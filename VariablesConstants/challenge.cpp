#include <iostream>

int main() {

    const double smallRoomPrice{25.0};
    const double largeRoomPrice{35.0};
    const double salesTax{0.06};

    int numSmallRooms {0};
    int numLargeRooms{0};

    std::cout << "How many small rooms would you like: ";
    std::cin >> numSmallRooms;
    std::cout << "How many large rooms would you like: ";
    std::cin >> numLargeRooms;
    std::cout << "***************************************\n";

    std::cout << "Estimate for carpet cleaning service:" << std::endl;
    std::cout << "Number of small rooms: " << numSmallRooms << std::endl;
    std::cout << "Number of large rooms: " << numLargeRooms << std::endl;
    std::cout << "Price per small room: $" << smallRoomPrice << std::endl;
    std::cout << "Price per large room: $" << largeRoomPrice << std::endl;
    std::cout << "Total: $" << (largeRoomPrice * numLargeRooms + smallRoomPrice * numSmallRooms) * 1.06 << std::endl;




    return 0; 
}