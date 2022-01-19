```cpp
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>

inline void add(int a) {
  std::cout << "Ini merupakan fungsi `inline`\n";
  
  std::cout << "\x1B[100;34m" << a + 1 << "\033[0m" << ": Hello\n";

  std::cout << "Akhir dari fungsi `inline`\n\n";
}

inline void colorcode() {
    std::cout << "\n";
    std::cout << "\x1B[31mTexting\033[0m\t\t";
    std::cout << "\x1B[32mTexting\033[0m\t\t";
    std::cout << "\x1B[33mTexting\033[0m\t\t";
    std::cout << "\x1B[34mTexting\033[0m\t\t";
    std::cout << "\x1B[35mTexting\033[0m\n";
    
    std::cout << "\x1B[36mTexting\033[0m\t\t";
    std::cout << "\x1B[36mTexting\033[0m\t\t";
    std::cout << "\x1B[36mTexting\033[0m\t\t";
    std::cout << "\x1B[37mTexting\033[0m\t\t";
    std::cout << "\x1B[93mTexting\033[0m\n";
    
    std::cout << "\033[3;42;30mTexting\033[0m\t\t";
    std::cout << "\033[3;43;30mTexting\033[0m\t\t";
    std::cout << "\033[3;44;30mTexting\033[0m\t\t";
    std::cout << "\033[3;104;30mTexting\033[0m\t\t";
    std::cout << "\033[3;100;30mTexting\033[0m\n";

    std::cout << "\033[3;47;35mTexting\033[0m\t\t";
    std::cout << "\033[2;47;35mTexting\033[0m\t\t";
    std::cout << "\033[1;47;35mTexting\033[0m\t\t";
    std::cout << "\t\t";
    std::cout << "\n";
}

int main() {

  std::cout << "\x1B[37mCopyright (c) 2022  EmptyWork\033[0m\n\n";

  std::cout << "\x1B[95mInline\033[0m merupakan kata kunci (\x1B[36mkeyword\033[0m)\n"
            << "yang bisa ditambahkan kesebuah fungsi\n"
            << "dimana fungsi itu akan di timpah badannya\n"
            << "kedalam \x1B[40;36m`int main()`\033[0m pada proses compiling\n\n";
  
  std::cout << "\x1B[40;34mINFO:\t\033[0m Program ini akan tidur selama 10 detik\n" 
            << "\t Sebelum melanjutkan prosesnya\n\n";
  sleep(10);
  for (int i = 0; i < 100; i++) add(i);

}
```