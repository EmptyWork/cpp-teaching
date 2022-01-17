#include <iostream>
#include <iomanip>
#include <vector>
#include "../lib/cashier_program-vector.h"

void Program::idprogram(bool start){
  std::cout << "CPP Teaching - Cashier \nCopyright (C) 2022  EmptyWork \nsite: <https://emptywork.netlify.app>" << std::endl;
  if(start) logoemptyWork();
}

void Program::logoemptyWork(){
    std::cout << "                                        \n                                        \n                      ,,.               \n                   ,lxNNk;              \n                  .,lkNMMNk;            \n        .',,.   ;d;   :O0kkOx;          \n        :XWWk',kNNc .'dKk;.:XNx'        \n        cNMMO:kMMWkx0XMMMNxdXMNc        \n        cNMMOcOMMMMMMMWWMMMOlkKc        \n        cNMMOcOMMMMWN0lkWMMx..,.        \n        cNMNOONMMM0c'. oWMMx.           \n        cXO::0MMMNc    oWMNl            \n        c0l.'0MWXo.    oXk;             \n        cNNklokd'      ',               \n        cNMMk'.                         \n        cNXd'                           \n        ,l'                             \n                                        \n                                        \n                                        \n";
}

Program::Program() {
  idprogram(true);
}

std::string Program::ambilnama(){
  return namapetugas;
}

void Program::aturnama(){
  std::cin.clear();
  std::cout << "Masukan nama kalian: ";
  std::getline(std::cin, namapetugas);
}

void Program::aturtotalbarang() {
  std::cout << "Masukan Jumlah Item: ";
  std::cin >> totalbarang;
}

int Program::ambiltotalbarang() {
  return totalbarang;
}

void Program::aturrincianbarang(
  std::vector<int>& hargabarang, 
  std::vector<int>& diskonbarang, 
  std::vector<std::string>& namabarang
  ){
  
  std::string namasementara;
  int hargasementara, diskonsementara;

  for (int i = 0; i < totalbarang; i++)
  {
    horizontalLine(true, true);

    std::cout << "Item ke-" << i+1 << std::endl;
    
    horizontalLine(false, false);
    
    std::cout << "Masukan nama item: ";
    std::cin >> namasementara;
    namabarang.push_back(namasementara);
    
    std::cout << "Harga item: ";
    std::cin >> hargasementara;
    hargabarang.push_back(hargasementara);

    std::cout << "Item Discount: ";
    std::cin >> diskonsementara;
    diskonbarang.push_back(diskonsementara);

    horizontalLine(true, true);
  }
}

void Program::showItemInfo(
  std::vector<int>& hargabarang, 
  std::vector<int>& diskonbarang, 
  std::vector<std::string>& namabarang
) {
  
  idprogram(false);
  
  std::cout << std::setw(2) << "NO";
  std::cout << std::setw(20) << "Nama";
  std::cout << std::setw(24) << std::setiosflags(std::ios_base::right) << "Harga";
  std::cout << std::setw(6) << "Disc.";
  std::cout << std::setw(15) << "Total" << std::endl;

  for (
    unsigned int i = 0; 
    i < namabarang.size(); 
    i++)
  {
    std::cout << std::setw(2) << i+1;
    std::cout << std::setw(20) << namabarang.at(i);
    
    std::cout << std::setiosflags(std::ios_base::right) << std::setw(2) << RP << std::setw(22) << hargabarang.at(i);
    
    std::cout << std::setw(5) << diskonbarang.at(i) << std::setw(1) << "%";

    int jumlahdiskon = hargabarang.at(i) * diskonbarang.at(i) / 100;
    if(jumlahdiskon < 0) jumlahdiskon = 0;
    int harusdibayar = hargabarang.at(i) - jumlahdiskon;

    std::cout << std::setw(15) << RP << harusdibayar << std::endl;
  }
}

void horizontalLine(
  bool type, 
  bool endline
) {
  if(type) std::cout << "========================================" << std::endl;
  else std::cout << "----------------------------------------" << std::endl;
  if(endline) std::cout << std::endl;
}