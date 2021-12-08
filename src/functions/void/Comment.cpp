#include <iostream>
/*
  Fungsi yang bertipe void tidak bisa
  mengembalikan data, maka keywords
  return tidak bisa di tambahkan,
  jika di dalam fungsi void terdapat
  return maka tidak bisa di compile
*/

void tampilkanInfo(int data) {
  std::cout << data;
}

void tampilkanInfo(bool data) {
  std::cout << data;
}

void tampilkanInfo(double data) {
  std::cout << data;
}

void tampilkanInfo(char data) {
  std::cout << data;
}

void tampilkanInfo(std::string data) {
  std::cout << data;
}

int main() {
  tampilkanInfo("Hello World");
  tampilkanInfo('\n');
  tampilkanInfo('\u0057');
  tampilkanInfo('\n');
  tampilkanInfo(87);
  tampilkanInfo('\n');
  tampilkanInfo(4.5);
  tampilkanInfo('\n');
  tampilkanInfo(false);
  return 0;
}
