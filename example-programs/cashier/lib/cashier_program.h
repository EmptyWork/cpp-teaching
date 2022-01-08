#pragma once

#define RP "Rp. "
class Program {
  private:
    std::string cashierName;
    int totalItem;

  public:
    Program();
    void idProgram(bool);
    void logoEmptyWork();
    void setName();
    void setTotalItem();
    void setItemInfo(int*, int*, std::string*);
    void showItemInfo(int*, int*, std::string*);
    std::string getName();
    int getTotalItem();
};

void horizontalLine(bool, bool);