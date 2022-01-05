#include <iostream>
/* 
  Menginisialisasi sebuah fungsi dengan nama tambah
  yang memiliki 2 parameter
  @param {a} Int
  @param {b} Int
  @return a + b - Int
*/
int tambah(int a, int b) {
  return a + b;
}

int main() {
  std::cout << "Contoh pembuatan Fungsi:" << std::endl;
  std::cout << "4 + 6 = " << tambah(4, 6);
  return 0;
}
