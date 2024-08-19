#include <iostream>

// These are macros. Rarely used but mostly for performance optimization, code reusability and simplification.
#define MY_NAME "Alex"
#define PRINT_JOE

// Void function has no return
void display()
{
}

// Int function returns an int
int number()
{
    return 3;
}

// Int function accepting arguments 
int add(int x, int y)
{
    return x + y;
}


void noNamespace()
{
    // This allows you to access names in the "std" namespace without using "std"
    using namespace std;
    cout << "Hello world" << endl;

}

int main()
{
    display();
    std::cout << number() << std::endl;
    std::cout << add(6, 9) << std::endl;

    int a{4};
    int b{6};
    std::cout << add(a, b) << std::endl;

    noNamespace();

    std::cout << MY_NAME << std::endl;

    // If PRINT_JOE is defined, then "Joe" will be printed out 
    #ifdef PRINT_JOE 
        std::cout << "Joe" << std::endl;
    #endif

    // If PRINT_JOE is not defined, then "Joe" will be printed out
    #ifndef PRINT_JOE 
        std::cout << "Joe" << std::endl;
    #endif
    
    return 0;
}


// FACTS
// The entire process of preprocessing, compiling, and linking is called translation
// The preprocessor replaces the #include directive with the contents of the included file
// Header files are used to declare functions in one place