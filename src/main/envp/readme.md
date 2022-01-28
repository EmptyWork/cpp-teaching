```cpp
#include <iostream>

int main(int argc, char *argv[],char *envp[]) {
  std::cout << "\x1B[43mCopyright (c) 2022  EmptyWork\033[0m\n\n";

  std::cout << "Panjang argumen yang di berikan adalah: " << argc << std::endl;
  
  std::cout << "Dan detail argumen tersebut adalah: " << std::endl;

  for(int i = 0; i < argc; i++) {
    std::cout << i+1 << ". " << argv[i] << std::endl;
  }
  
  std::cout << "\nPanjang pengaturan lingkungan yang ada adalah: " << argc << std::endl;

  std::cout << "Sedangkan detail pengaturan lingkungan adalah: " << std::endl;

  for(int i = 0; i < sizeof(envp); i++) {
    std::cout << i+1 << ". " << envp[i] << std::endl;
  }
}
```