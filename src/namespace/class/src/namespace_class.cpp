#include <iostream>

enum Status {
  HIDUP,
  MENINGGAL
};

namespace {

  class Manusia {
    private:
      std::string name;
      int age;
      char gender;
      Status status;

      std::string meninggal = "alm. ";

    public:
      Manusia(Status _status){
        std::cout << "(obj) manusia dibuat" << std::endl;
        status = _status;
      }

      void aturnama(std::string _name){
        (status == MENINGGAL) ? name = meninggal + _name : name = _name;
      }

      void aturumur(int _age) {
        age = _age;
      }

      void aturjeniskelamin(char _gender) {
        gender = _gender;
      }

      std::string ambilnama() {
        return  name;
      }

      int ambilumur() {
        return age;
      }

      char ambiljeniskelamin() {
        return gender;
      }

      ~anusiaM() {
        std::cout << "(obj) manusia dihapus" << std::endl;
      }
  };
};

int main() {
  using namespace std;
  
  cout << "CPP Teaching Copyright (C) 2022  EmptyWork" << std::endl;
  
  ::Manusia jason(MENINGGAL);
 
  jason.aturnama("Jason Aldo Amluina");
  jason.aturumur(23);
  jason.aturjeniskelamin('P');

  cout << "Nama\t\t\t: " << jason.ambilnama() << std::endl;
  cout << "Umur\t\t\t: " << jason.ambilumur() << std::endl;
  cout << "Jenis Kelamin (P/W)\t: " << jason.ambiljeniskelamin() << std::endl;

}