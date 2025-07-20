#include <iostream>
#include <string>

void Print(std::string& str) {
    std::cout << "String left: " << str << std::endl;
}

void Print(std::string&& str) {
    std::cout << "String right: " << str << std::endl;
}

int main() {
    std::string str = "hoge";

    Print(str);                // Calls the lvalue reference overload
    Print(std::move(str));     // Calls the rvalue reference overload

    return 0;
}