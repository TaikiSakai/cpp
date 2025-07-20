#include <tuple>
#include <string>
#include <iostream>

int main() {
  std::tuple<std::string, int> t {"Hello", 42};

  std::cout << std::get<0>(t) << std::endl;

  return 0;
}