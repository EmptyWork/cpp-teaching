#include <iostream>
#define NL '\n'

int tambah(int a, int b) {
  return a + b;
}

bool kurangdari2(int a) {
  return (a < 2) ? true : false;
}

float keliling(float a, float b) {
  return 2 * (a + b);
}

double luas(double a) {
  return a * a;
}

const char* benarsalah(int a) {
  return (a == 1) ? "Benar" : "Salah";
}

int main() {
  std::cout << "CPP Teaching Copyright (C) 2021  EmptyWork" << NL;
  std::cout << "Contoh pembuatan Fungsi: " << NL;
  std::cout << "Hasil dari 4 + 6: " << tambah(4, 6) << NL;
  std::cout << "Apakah -1 kurang dari 2: " << benarsalah(kurangdari2(-1)) << NL; 
  std::cout << "Keliling dari Persegi Panjang (5, 8): " << keliling(4.5f, 2.4f) << NL; 
  std::cout << "Luas dari Kotak (4): " << luas(4.5) << NL; 
  return 0;
}
