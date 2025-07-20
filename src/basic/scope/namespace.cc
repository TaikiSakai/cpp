#include <iostream>
#include <string>

namespace A {
    int count = 0;
}

namespace B {
    int count = 0;
}

namespace X {
    int count = 10000;

    namespace Y {
        namespace Z {
            int getCount() {
                return count;
            }
        }
    }
}

int main() {
    A::count = 5;
    B::count = 10;

    std::cout << "A::count: " << A::count << std::endl; // Outputs: A::count: 5
    std::cout << "B::count: " << B::count << std::endl; // Outputs: B::count: 10

    std::cout << "X::Y::Z::getCount(): " << X::Y::Z::getCount() << std::endl; // Outputs: X::Y::Z::getCount(): 10000

    return 0;
}
