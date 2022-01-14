#pragma once

#include <iostream>
#include <vector>

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
    void setItemInfo(std::vector<int>, std::vector<int>, std::vector<std::string>);
    void showItemInfo(std::vector<int>, std::vector<int>, std::vector<std::string>);
    std::string getName();
    int getTotalItem();
};

void horizontalLine(bool, bool);