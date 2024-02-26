#include <iostream>

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
    cout << "Hello world";

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

    
    return 0;
}


