#include <iostream>

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
