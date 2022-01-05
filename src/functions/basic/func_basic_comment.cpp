#include <iostream>
#define NL '\n'

/**
 * @brief Menginisialisasi sebuah fungsi dengan nama tambah 
 * yang memiliki 2 parameter
 * 
 * @param a nilai a
 * @param b nilai b
 * @return nilai hasil tambah dari a dan b
 */
int tambah(int a, int b) {
  return a + b;
}

/**
 * @brief Memeriksa jika nilai yang dimasukan kurang dari
 * 2 maka akan mengembalikan true, jika tidak akan mengembalikan
 * false
 * 
 * @param a nilai a
 * @return true 
 * @return false 
 */
bool kurangdari2(int a) {
  return (a < 2) ? true : false;
}

/**
 * @brief Mengembalikan nilai keliling persegi panjang
 * dari nilai lebar dan panjang
 * 
 * @param a lebar dari persegi panjang
 * @param b tinggi dari persegi panjang
 * @return float 
 */
float keliling(float a, float b) {
  return 2 * (a + b);
}

/**
 * @brief Mengembalikan nilai luas kotak dari nilai sisi
 * 
 * @param a luas dari kotak
 * @return double 
 */
double luas(double a) {
  return a * a;
}

/**
 * @brief Mengembalikan "Benar" atau "Salah" berdasarkan 1 atau 0
 * 
 * @param a nilai 1 dan 0
 * @return const char* 
 */
const char* benarsalah(int a) {
  return (a == 1) ? "Benar" : "Salah";
}

int main() {
  std::cout << "Contoh pembuatan Fungsi: " << NL;
  std::cout << "Hasil dari 4 + 6: " << tambah(4, 6) << NL;
  std::cout << "Apakah -1 kurang dari 2: " << benarsalah(kurangdari2(-1)) << NL; 
  std::cout << "Keliling dari Persegi Panjang (5, 8): " << keliling(4.5f, 2.4f) << NL; 
  std::cout << "Luas dari Kotak (4): " << luas(4.5) << NL; 
  return 0;
}
