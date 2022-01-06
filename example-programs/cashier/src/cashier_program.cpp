#include <iostream>
#include <iomanip>
#include "cashier_program.h"

void Program::idProgram(){
  horizontalLine();

  std::cout << "CPP Teaching - Cashier | Copyright (C) 2022  EmptyWork" << NL;
  std::cout << std::setw(40) << "Cashier" << NL;
  
  horizontalLine();
}

Program::Program() {
  setTotalItem();
}

std::string Program::getName(){
  return cashierName;
}

void Program::setName(){
  std::cout << "Masukan nama kalian: ";
  std::cin.ignore();
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
    horizontalLine();
    std::cout << NL << std::setw(40) << "Item ke-" << i+1 << NL;
    
    std::cout << "Masukan nama item: ";
    std::getline(std::cin, itemName[i]);
    
    std::cout << "Harga item: ";
    std::cin >> itemPrice[i];

    std::cout << "Item Discount: ";
    std::cin >> itemDiscount[i];
    
    horizontalLine();
  }
}

void Program::showItemInfo(int* itemPrice, int* itemDiscount, std::string* itemName) {
    for (int i = 0; i < totalItem; i++)
  {
    std::cout << itemName[i];
  }
}

void horizontalLine() {
  std::cout << std::setw(40) << std::setfill(' ') << std::endl;
}