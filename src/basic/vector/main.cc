#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> x = {0, 1, 2, 3, 4};

    x.emplace_back(5);
    int size = x.size();
    std::cout << size << std::endl;

    x.pop_back();
    std::cout << x.size() << std::endl;

    std::cout << "==========================" << std::endl;

    std::vector<int> y = {0, 1, 2, 3, 4};
    auto py = y.data();
    int num = *py;

    std::cout << *py << std::endl;

    num = 10;

    std::cout << y[0] << std::endl; // This will still print 0, as we did not modify the vector's contents

    *py = 10;
    std::cout << y[0] << std::endl; // Now this will print 10, as we modified the first element

    return 0;
}