#include <iostream>

struct hewan {
  int umur;
  const char *nama;
};

typedef struct
{
  int x, y, luas, keliling;
} persegi_panjang;


int main() {
  hewan ikan;
  ikan.nama = "Ikan Emas";
  ikan.umur = 17;

  std::cout << "Nama hewan: " << ikan.nama << std::endl;
  std::cout << "Umur hewan: " << ikan.umur << std::endl;

  persegi_panjang pertama;
  pertama.x = 7;
  pertama.y = 8;
  pertama.luas = pertama.x + pertama.y;
  pertama.keliling = 2 * (pertama.x + pertama.y);

  std::cout << "Ukuran dari Pertama: " << sizeof(pertama) << std::endl;
  std::cout << "Luas dari Pertama: " << pertama.luas << std::endl;
  std::cout << "Keliling dari Pertama: " << pertama.keliling;
}