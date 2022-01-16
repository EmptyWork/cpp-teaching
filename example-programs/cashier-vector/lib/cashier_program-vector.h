#pragma once

#include <iostream>
#include <vector>

#define RP "Rp. "
class Program {
  private:
    std::string namapetugas;
    int totalbarang;

  public:
    Program();
    void idprogram(bool);
    void logoemptyWork();
    void aturnama();
    void aturtotalbarang();
    void aturrincianbarang(std::vector<int>&, std::vector<int>&, std::vector<std::string>&);
    void showItemInfo(std::vector<int>&, std::vector<int>&, std::vector<std::string>&);
    std::string ambilnama();
    int ambiltotalbarang();
};

void horizontalLine(bool, bool);