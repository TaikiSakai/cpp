#include <iostream>
#include <array>

void PrintArray1(const int x[5]) {
    for (int i = 0; i < 5; ++i) {
        std::cout << x[i] << std::endl;
    }
}

void PrintArray2(const int* x) {
    for (int i = 0; i < 5; ++i) {
        std::cout << x[i] << std::endl;
    }
}

void PrintArray(const int* x, std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << x[i] << std::endl;
    }
}

int main() {
    int x[5] = {0, 1, 2, 3, 4};
    int *p = x;

    std::cout << *p << std::endl;
    std::cout << *(p + 1) << std::endl;
    std::cout << *(p + 2) << std::endl;
    std::cout << *(p + 3) << std::endl;
    std::cout << *(p + 4) << std::endl;
    std::cout << *(p + 5) << std::endl;
    std::cout << *(p + 6) << std::endl; // This may access out of bounds, undefined behavior

    std::cout << "==========================" << std::endl;

    std::cout << x[4] << std::endl;

    PrintArray1(x);
    PrintArray2(x);

    std::cout << "==========================" << std::endl;
    constexpr std::size_t size = 5;
    int y[size] = {0, 1, 2, 3, 4};
    PrintArray(y, size);

    PrintArray(x, 5);

    std::cout << "==========================" << std::endl;

    std::array<int, 6> z = {0, 1, 2, 3, 4, 5};
    PrintArray(z.data(), z.size());

    std::cout << "sizeof(z): " << z.size() << std::endl;

    return 0;
}
