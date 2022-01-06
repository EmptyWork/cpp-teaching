#include <iostream>
#define NL '\n'

enum Status {
  STATUS_BARU,
  STATUS_LAMA,
  STATUS_ABIS
};

enum Jawab : bool {
  Y = true,
  N = false
};

int main() {
  std::cout << "CPP Teaching Copyright (C) 2021  EmptyWork" << NL;

  Jawab ulang;
  Status pembayaran_pertama;

  ulang = Y;
  pembayaran_pertama = STATUS_ABIS;
  
  std::cout << "Nilai yang dimasukan adalah " << ulang << NL;

  if(ulang != N) {
    std::cout << "Status dari Pembayaran adalah " << pembayaran_pertama << NL;
  }

}