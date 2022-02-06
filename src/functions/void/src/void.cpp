#include <iostream>

void tampilkanInfo(int data);
void tampilkanInfo(bool data);
void tampilkanInfo(double data);
void tampilkanInfo(char data);
void tampilkanInfo(std::string data);

int main() {
  tampilkanInfo("CPP Teaching Copyright (C) 2021  EmptyWork");
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