#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "\x1B[43mCopyright (c) 2022  EmptyWork\033[0m\n\n";

  std::cout << "Panjang argumen yang di berikan adalah: " << argc << std::endl;
  
  std::cout << "Dan detail argumen tersebut adalah: " << std::endl;

  for(int i = 0; i < argc; i++) {
    std::cout << i+1 << ". " << argv[i] << std::endl;
  }
}