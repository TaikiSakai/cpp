#include <iostream>


int main() {
    int* p1 = new int(100);
    int* p2 = new int[5];

    std::cout << "p1: " << *p1 << std::endl; // Output: p1: 100
    std::cout << "p2[0]: " << p2[110] << std::endl; // Output: p2[0]: 0

    delete p1;
    delete[] p2;
}