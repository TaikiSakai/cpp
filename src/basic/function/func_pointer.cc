#include <iostream>

int Add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = Add; // Function pointer declaration and initialization
    int result = funcPtr(5, 3);      // Using the function pointer to call the function

    std::cout << "Result of Add(5, 3): " << result << std::endl;

    return 0;
}