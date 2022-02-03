```cpp
#include <iostream>

auto add(auto a, auto b) {
  return a + b;
}

/*
kata kunci auto merupakan tipe data sementara
dimana kata kunci itu kan di ubah mengikuti 
tipe data yang dimasukan atau tipe data yang di
kembalikan dari fungsi

contoh fungsi di atas bisa juga di deklarasi sebagai
beberapa fungsi dibawah ini.
int add(int a, int b)
float add(float a, float b)
double add(double a, double b)

*/

int main() {
  std::cout << add(3,4);

  std::cout << std::endl;
  std::cout << add(3.8,-40) << std::endl;
  std::cout << add(-3.8,40) << std::endl;
  std::cout << add(4,5) << std::endl;
  std::cout << add(4.92f,5) << std::endl;
}
```