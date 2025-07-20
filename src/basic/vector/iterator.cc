#include <vector>
#include <iostream>
#include <string>

int main() {
    std::vector<int> x = {0, 1, 2, 3, 4};

    auto it = x.begin();
    for (auto it = x.begin(); it != x.end(); ++it) {
        std::cout << *it << std::endl; // Output: 0
    }
}