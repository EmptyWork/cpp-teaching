#include <iostream>
#include "input_array_program.h"

int main() {

  std::cout << "CPP Teaching - Array | Copyright (C) 2021  EmptyWork" << std::endl;
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

  barisbaru();

  do {
  std::cout << "Ingin Menganti salah satu angka? [y/n] ";
  char res = input(res);
    if(tolower(res) == 'y') {
      if(length == 0) {
        std::cout << "Pilih nomor baris yang ingin di ganti [1]: ";
      } else {
        std::cout << "Pilih nomor baris yang ingin di ganti [1 - "<< length << "]: ";
      }
      int ganti = input();
      std::cout << "Masukan angka baru: ";
      int angkaBaru = input();
      baris[ganti - 1] = angkaBaru;

      std::cout << "Array kamu sekarang: ";
      for(int i = 0; i < length; i++) {
        std::cout << baris[i];
        if(i < length - 1) {
          std::cout << ",";
        } else {
          std::cout << std::endl;
        }
      }
    } else {
      return 0;
    }
  } while (1);

  return 0;

}