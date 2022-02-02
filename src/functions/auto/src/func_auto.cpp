#include <iostream>

auto add(auto a, auto b) {
  return a + b;
}

int main() {
  std::cout << add(3,4);
}