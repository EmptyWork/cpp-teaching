#include <iostream>
#include <vector>
#include "cashier_program.h"

int main() {
  Program cashier;

  cashier.setName();

  std::cout << "Name: " << cashier.getName() << std::endl;
  cashier.setTotalItem();

  std::vector<std::string> itemName;
  std::vector<int> itemPrice, itemDiscount;;

  cashier.setItemInfo(itemPrice, itemDiscount, itemName);
  cashier.showItemInfo(itemPrice, itemDiscount, itemName);
}