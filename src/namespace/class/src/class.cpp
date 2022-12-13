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
        std::cout << "(obj) Lingkaran dibuat dengan diameter: " << _diameter << std::endl;
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
      std::string nama;
      int age;
      const char *jeniskelamin;
      Status status;

      std::string meninggal = "alm. ";

    public:
      Manusia(Status _status){
        std::cout << "(obj) manusia dibuat" << std::endl;
        status = _status;
      }

      void aturnama(std::string _nama){
        if (status == MENINGGAL) 
          nama = meninggal + _nama;
        else
          nama = _nama;
      }

      void aturumur(int _age) {
        age = _age;
      }

      void aturjeniskelamin(char _jeniskelamin) {
        if(_jeniskelamin == 'P') 
          jeniskelamin = "Pria";
        else if(_jeniskelamin == 'W') 
          jeniskelamin = "Wanita";
        else 
          jeniskelamin = "tidak diatur, silahkan gunakan aturjeniskelamin(string)";
      }

      std::string ambilnama() {
        return nama;
      }

      int ambilumur() {
        return age;
      }

      const char* ambiljeniskelamin() {
        return jeniskelamin;
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