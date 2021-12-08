#include <iostream>
#include "Program.h"

int main() {
  std::cout << "Selamat Datang ke Aplikasi Pembuat Array" << std::endl;
  std::cout << "Masukan Panjang Baris: ";
  int length = input();
  int baris[length];
  for (int i = 0; i < length; i++) {
    std::cout << "Masukan angka untuk baris ke " << i + 1 << ": ";
    baris[i] = input();
  }

  std::cout << "Array yang kamu masukan: ";
  for(int i = 0; i < length; i++) {
    std::cout << baris[i];
    if(i < length - 1) {
      std::cout << ",";
    }
  }

  std::cout << '\n';

  std::cout << "Ingin Menganti salah satu angka? [y/n] ";
  char res = input(res);
  if(tolower(res) == 'y') {
    std::cout << "Pilih nomor baris yang ingin di ganti: ";
    int ganti = input();
    std::cout << "Masukan angka baru: ";
    int angkaBaru = input();
    baris[ganti] = angkaBaru;

    std::cout << "Array kamu sekarang: ";
    for(int i = 0; i < length; i++) {
      std::cout << baris[i];
      if(i < length - 1) {
        std::cout << ",";
      }
    }
  }

  return 0;

}