#include <iostream>

auto add(auto a, auto b) {
  return a + b;
}

int main() {
  std::cout << add(3,4);
  
  std::cout << std::endl;
  std::cout << add(3.8,-40) << std::endl;
  std::cout << add(-3.8,40) << std::endl;
  std::cout << add(4,5) << std::endl;
  std::cout << add(4.92f,5) << std::endl;
}