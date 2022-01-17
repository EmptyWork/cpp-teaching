#include <iostream>
#include <vector>
#include "../lib/cashier_program-vector.h"

int main() {
  Program cashier;

  cashier.aturnama();

  std::cout << "Nama: " << cashier.ambilnama() << std::endl;
  cashier.aturtotalbarang();

  std::vector<std::string> namabarang;
  std::vector<int> hargabarang, diskonbarang;;

  cashier.aturrincianbarang(
    hargabarang, 
    diskonbarang, 
    namabarang
    );
    
  cashier.showItemInfo(
    hargabarang, 
    diskonbarang, 
    namabarang
    );
}