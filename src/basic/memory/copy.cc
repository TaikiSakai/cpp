#include <iostream>

void DeepCopy(int v) {
    v = 50;
}

void ShallowCopy(int* v) {
    *v = 50000;
}

int main() {
    int a = 100;
    DeepCopy(a);
    std::cout << "After DeepCopy, a: " << a << std::endl;

    int b = 100;
    ShallowCopy(&b);
    std::cout << "After ShallowCopy, b: " << b << std::endl;
    
    return 0;
}