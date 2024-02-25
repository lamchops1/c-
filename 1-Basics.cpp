#include <iostream>

int main() {

    // How to make print statement 
    std::cout << "Hello world" << std::endl;

    // Defining multiple variables convention
    int a, b;

    // Initializing variables different techniques 
    int x = 5; // Copy initialization
    int y(7); // Direct initialization. Introduced for more efficient initialization for complex objects
    int z {10}; // List initialization. A modern way to initialize variables apparently. 
    std::cout << x << std::endl << y << std::endl  << z << std::endl;

    // Literal vs Operators 
    std::cout << 5 << std::endl; // Value 5 is a literal
    std::cout << x << std::endl; // Value is a variable

    return 0;
}



// FACTS
// In C++, direct memory access is discouraged. Accessing memory through an object is recommended.