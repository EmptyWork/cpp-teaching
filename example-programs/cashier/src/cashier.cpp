#include <iostream>
#include "cashier_program.h"

int main() {
  Program cashier;

  cashier.aturnama();

  std::cout << "Nama: " << cashier.ambilnama() << std::endl;
  cashier.aturtotalbarang();


  int hargabarang[cashier.ambiltotalbarang()], diskonbarang[cashier.ambiltotalbarang()];
  std::string namabarang[cashier.ambiltotalbarang()];

  cashier.setItemInfo(hargabarang, diskonbarang, namabarang);
  cashier.showItemInfo(hargabarang, diskonbarang, namabarang);
}