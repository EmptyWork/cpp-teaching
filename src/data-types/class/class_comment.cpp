#include <iostream>
#include "header.h"

/**
 * @brief Enumeration yang terdiri dari
 * HIDUP atau MENINGGAL
 */
enum Status {
  HIDUP,
  MENINGGAL
};

/**
 * @brief Class bernama Manusia yang
 * memiliki 4 properti biasa, yaitu: name, age,
 * gender dan status dan 1 properti khusus: meninggal
 */

class Manusia {

  // tidak bisa di akses secara langsung
  private:
  // properti biasa
    std::string name;
    int age;
    char gender;
    Status status;

  // properti khusus
    std::string meninggal = "alm. ";

  // bisa diakses secara langsung
  public:
    Manusia(Status _status){
      std::cout << "(obj) manusia dibuat" << NL;
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

    int ambilUmur() {
      return age;
    }

    char ambiljeniskelamin() {
      return gender;
    }

    ~Manusia() {
      std::cout << "(obj) manusia dihapus" << NL;
    }
};

int main() {
  using namespace std;
  Manusia jason(MENINGGAL);
 
  jason.aturnama("Jason Aldo Amluina");
  jason.aturumur(23);
  jason.aturjeniskelamin('P');

  cout << "Nama\t\t\t: " << jason.ambilnama() << NL;
  cout << "Umur\t\t\t: " << jason.ambilUmur() << NL;
  cout << "Jenis Kelamin (P/W)\t: " << jason.ambiljeniskelamin() << NL;

}