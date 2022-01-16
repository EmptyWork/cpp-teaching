#include <iostream>
#include <vector>
#include "../lib/cashier_program-vector.h"

int main() {
  Program cashier;

  cashier.aturnama();

  std::cout << "Nama: " << cashier.ambilnama() << std::endl;
  cashier.aturtotalbarang();

  std::vector<std::string> itemName;
  std::vector<int> itemPrice, itemDiscount;;

  cashier.aturrincianbarang(
    itemPrice, 
    itemDiscount, 
    itemName
    );
    
  cashier.showItemInfo(
    itemPrice, 
    itemDiscount, 
    itemName
    );
}