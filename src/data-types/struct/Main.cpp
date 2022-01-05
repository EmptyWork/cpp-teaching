#include <iostream>

typedef struct
{
  int x;
  int y;
  int luas;
  int keliling;
} persegi_panjang;


int main() {
  persegi_panjang pertama;
  pertama.x = 7;
  pertama.y = 8;
  pertama.luas = pertama.x + pertama.y;
  pertama.keliling = 2 * (pertama.x + pertama.y);

  std::cout << "Ukuran dari Pertama: " << sizeof(pertama) << std::endl;
  std::cout << "Luas dari Pertama: " << pertama.luas << std::endl;
  std::cout << "Keliling dari Pertama: " << pertama.keliling;
}