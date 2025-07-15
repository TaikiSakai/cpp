#include <iostream>

int x = 123;

int* p = &x;

int main() {
    std::cout << 'p' << p << std::endl;
    std::cout << "*p" << *p << std::endl;
    std::cout << "&x" << &x << std::endl;
    std::cout << 'x' << x << std::endl;
    return 0;
}
