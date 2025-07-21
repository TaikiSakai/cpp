#include <iostream>
#include <memory>


int main() {
    std::shared_ptr<int> x = std::make_shared<int>(100);

    {
        std::shared_ptr<int> y = x;
        std::cout << "Shared pointer y points to: " << *y << std::endl;
    }

    std::cout << "Shared pointer x points to: " << *x << std::endl;

    return 0;
}
