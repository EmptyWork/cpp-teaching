#include <iostream>
#include <iomanip>
#include "cashier_program.h"

void Program::idProgram(bool start){
  std::cout << "CPP Teaching - Cashier \nCopyright (C) 2022  EmptyWork \nsite: <https://emptywork.netlify.app>" << std::endl;
  if(start) logoEmptyWork();
}

void Program::logoEmptyWork(){
    std::cout << "                                        \n                                        \n                      ,,.               \n                   ,lxNNk;              \n                  .,lkNMMNk;            \n        .',,.   ;d;   :O0kkOx;          \n        :XWWk',kNNc .'dKk;.:XNx'        \n        cNMMO:kMMWkx0XMMMNxdXMNc        \n        cNMMOcOMMMMMMMWWMMMOlkKc        \n        cNMMOcOMMMMWN0lkWMMx..,.        \n        cNMNOONMMM0c'. oWMMx.           \n        cXO::0MMMNc    oWMNl            \n        c0l.'0MWXo.    oXk;             \n        cNNklokd'      ',               \n        cNMMk'.                         \n        cNXd'                           \n        ,l'                             \n                                        \n                                        \n                                        \n";
}

Program::Program() {
  idProgram(true);
}

std::string Program::getName(){
  return cashierName;
}

void Program::setName(){
  std::cin.clear();
  std::cout << "Masukan nama kalian: ";
  std::getline(std::cin, cashierName);
}

void Program::setTotalItem() {
  std::cout << "Masukan Jumlah Item: ";
  std::cin >> totalItem;
}

int Program::getTotalItem() {
  return totalItem;
}

void Program::setItemInfo(int* itemPrice, int* itemDiscount, std::string* itemName){
  for (int i = 0; i < totalItem; i++)
  {
    horizontalLine(true, true);

    std::cout << "Item ke-" << i+1 << std::endl;
    
    horizontalLine(false, false);
    
    std::cout << "Masukan nama item: ";
    std::cin >> itemName[i];
    
    std::cout << "Harga item: ";
    std::cin >> itemPrice[i];

    std::cout << "Item Discount: ";
    std::cin >> itemDiscount[i];

    horizontalLine(true, true);
  }
}


// TODO: fix the buggy table when showing up the prices
void Program::showItemInfo(int* itemPrice, int* itemDiscount, std::string* itemName) {
  idProgram(false);
  std::cout << std::setw(2) << "NO";
  std::cout << std::setw(20) << "Nama";
  std::cout << std::setw(24) << std::setiosflags(std::ios_base::right) << "Harga";
  std::cout << std::setw(6) << "Disc.";
  std::cout << std::setw(15) << "Total" << std::endl;
    for (int i = 0; i < totalItem; i++)
  {
    std::cout << std::setw(2) << i+1;
    std::cout << std::setw(20) << itemName[i];
    
    // TODO: need to fix the spacing result on two '<<'
    std::cout << std::setw(24) << std::setiosflags(std::ios_base::right) << RP << itemPrice[i];
    
    // TODO: need to fix the spacing result on two '<<'
    std::cout << std::setw(6) << itemDiscount[i] << "%";

    int discountAmout = itemPrice[i] * itemDiscount[i] / 100;
    if(discountAmout < 0) discountAmout = 0;
    int needToPay = itemPrice[i] - discountAmout;


    // TODO: need to fix the spacing result on two '<<'
    std::cout << std::setw(15) << RP << needToPay << std::endl;
  }
}

void horizontalLine(bool type, bool endline) {
  if(type) std::cout << "========================================" << std::endl;
  else std::cout << "----------------------------------------" << std::endl;
  if(endline) std::cout << std::endl;
}