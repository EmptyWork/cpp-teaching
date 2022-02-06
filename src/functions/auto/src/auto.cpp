#include <iostream>

auto tambah(auto a, auto b) {
  return a + b;
}

int main() {
  std::cout << tambah(3,4);
  
  std::cout << std::endl;
  std::cout << tambah(3.8,-40) << std::endl;
  std::cout << tambah(-3.8,40) << std::endl;
  std::cout << tambah(4,5) << std::endl;
  std::cout << tambah(4.92f,5) << std::endl;
}