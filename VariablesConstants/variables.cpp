#include <iostream>
#include <climits> //for maximum int values
#include <cfloat> //for maximum floating-pointer values.  

int main() {
    /*
        int age; // Uninitialized.
        int age = 21; // C-Like Initialization.
        int age (21); // Constrcutor Initialization.
        int age {21}; // C++ - Like Initialization.
    */

    /* 
        short, int, long, long long.
        float, double.
        char
        true, false
    */

    /*
        INT_MAX     // Maximum value for int
        LONG_MAX    // Maximum value for long
        LLONG_MAX   // Maximum value for long long

        FLT_MAX     // Maximum value for float
        DBL_MAX     // Maximum value for double
        LDBL_MAX    // Maximum value for long double
   
    */

    std::cout << sizeof(long double);

    return 0;
}