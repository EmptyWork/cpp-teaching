#include <iostream>
#define NL '\n'

/**
 * @brief Enumeration bernama Status
 * yamg memiliki nilai STATUS_BARU, STATUS_LAMA
 * dan STATUS_ABIS
 */
enum Status {
  STATUS_BARU,
  STATUS_LAMA,
  STATUS_ABIS
};

/**
 * @brief Enumeration bernama Jawab
 * yang miliki nilai Y = true dan N = false
 */
enum Jawab : bool {
  Y = true,
  N = false
};

int main() {
  Jawab ulang;
  Status pembayaran_pertama;

  ulang = Y;
  pembayaran_pertama = STATUS_ABIS;
  
  std::cout << "Nilai yang dimasukan adalah " << ulang << NL;

  if(ulang != N) {
    std::cout << "Status dari Pembayaran adalah " << pembayaran_pertama << NL;
  }

}