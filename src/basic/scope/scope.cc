#include <iostream>

int g = 1000;

int main() {
    int x = 123;

    {
        int x = 456;
        std::cout << x << std::endl;        
    }

    {
        std::cout << x << std::endl;
    }

    std::cout << g << std::endl;

    {
        int g = 2000;
        std::cout << g << std::endl; // This will print the local g

        std::cout << ::g << std::endl; // This will print the global g
    }

    return 0;    
}