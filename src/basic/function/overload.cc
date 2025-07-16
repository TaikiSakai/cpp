#include <iostream>

void Print(int x) {
    std::cout << "int: " << x << std::endl;
}

void Print(double x) {
    std::cout << "double: " << x << std::endl;
}

int main() {
    Print(10);        // Calls Print(int)
    Print(3.14);     // Calls Print(double)
    Print(42.0f);    // Calls Print(double) due to float to double conversion

    return 0;
}

