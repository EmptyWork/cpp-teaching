#include <iostream>
#include "cashier_program.h"

int main() {
  Program cashier;

  cashier.idProgram();
  cashier.setName();
  
  std::cout << "Name: " << cashier.getName();

  int itemPrice[cashier.getTotalItem()], itemDiscount[cashier.getTotalItem()];
  std::string itemName[cashier.getTotalItem()];

  cashier.setItemInfo(itemPrice, itemDiscount, itemName);
  cashier.showItemInfo(itemPrice, itemDiscount, itemName);
}