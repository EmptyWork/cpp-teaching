#pragma once

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
    void setItemInfo(int*, int*, std::string*);
    void showItemInfo(int*, int*, std::string*);
    std::string ambilnama();
    int ambiltotalbarang();
};

void horizontalLine(bool, bool);