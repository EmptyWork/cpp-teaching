```cpp
#include <iostream>

enum Status {
  HIDUP,
  MENINGGAL
};

namespace Bentuk {
  class Lingkaran {
    private:
      int diameter;
      float phi;

    public:
      Lingkaran(int _diameter) {
        std::cout << "(obj) Lingkaran dibuat" << std::endl;
        diameter = _diameter;
        phi = 3.14;
      }

      int luas() {
        return phi * diameter * diameter;
      }

      ~Lingkaran() {
        std::cout << "(obj) Lingkaran dihapus" << std::endl;
      }
  };
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
        return name;
      }

      int ambilumur() {
        return age;
      }

      char ambiljeniskelamin() {
        return gender;
      }

      ~Manusia() {
        std::cout << "(obj) manusia dihapus" << std::endl;
      }
  };
};

int main() {
  using namespace std;
  
  cout << "CPP Teaching Copyright (C) 2022  EmptyWork" << endl;
  
  ::Manusia jason(MENINGGAL);
 
  jason.aturnama("Jason Aldo Amluina");
  jason.aturumur(23);
  jason.aturjeniskelamin('P');

  cout << "Nama\t\t\t: " << jason.ambilnama() << endl;
  cout << "Umur\t\t\t: " << jason.ambilumur() << endl;
  cout << "Jenis Kelamin (P/W)\t: " << jason.ambiljeniskelamin() << endl;
 
  Bentuk::Lingkaran bangunpertama(2);
  cout << "Luas lingkaran yaitu: " << bangunpertama.luas() << endl;
}
```