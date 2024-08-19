#include <iostream>
#include <cstdint> // Needed for fixed width integers


int main() {

    int num = 12;
    float dec = 4.9127;

    // sizeof operator is a unary operator that takes in a type or a variable and returns its size in bytes
    std::cout << "bool:" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "num:" << sizeof(num) << " bytes" << std::endl;
    std::cout << "dec:" << sizeof(dec) << " bytes" << std::endl;

    // booleans
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0
    std::cout << false << '\n'; // true evaluates to 1
    std::cout << !false << '\n'; // !true evaluates to 0

    // We use the "signed" and "unsigned" syntax to be more specific with our data types and it increases compile efficiency and speed
    signed int x = 4931;
    signed int x1 = 2147483648; // Note: this will not work because it is outside the range of -2,147,483,648 to 2,147,483,647!
    std::cout << x << std::endl;

    unsigned int y = 284;
    unsigned int y1 = -1; /// Note: this will not work because it is outside the range of 0 to 4,294,967,295!
    std::cout << y << std::endl;

    // Fixed width integers are preferred over using long, short, unsigned, signed etc.
    std::uint16_t z = 102;
    std::cout << z << std::endl;
    return 0;

    

}



// FACTS
// The amount of memory that an object uses is based on its data type
// bool:           1 byte
// char:           1 byte
// short:          2 bytes
// int:            4 bytes
// long:           4 bytes
// long long:      8 bytes
// float:          4 bytes
// double:         8 bytes
// long double:    8 bytes


// The signed integers below can only be assigned any integer value between the following ranges 
// 8 bit signed:    -128 to 127 (inclusive)
// 16 bit signed:	-32,768 to 32,767 (inclusive) e.g. signed short int 
// 32 bit signed:	-2,147,483,648 to 2,147,483,647 (inclusive) e.g. signed int 
// 64 bit signed:	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (inclusive) e.g. signed long double 

// The unsigned integers below can only be assigned any integer value between the following ranges 
// 8 bit unsigned:	0 to 255
// 16 bit unsigned:	0 to 65,535
// 32 bit unsigned:	0 to 4,294,967,295
// 64 bit unsigned:	0 to 18,446,744,073,709,551,615

// Fixed width integers
// std::int8_t	    1 byte signed: 	    -128 to 127	
// std::uint8_t	    1 byte unsigned:     0 to 255	
// std::int16_t	    2 byte signed:  	-32,768 to 32,767	
// std::uint16_t	2 byte unsigned:    0 to 65,535	
// std::int32_t	    4 byte signed:  	-2,147,483,648 to 2,147,483,647	
// std::uint32_t	4 byte unsigned:   	0 to 4,294,967,295	
// std::int64_t	    8 byte signed:  	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	
// std::uint64_t	8 byte unsigned:     0 to 18,446,744,073,709,551,615