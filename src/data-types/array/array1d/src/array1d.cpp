#include <iostream>

#define MAKS_BARIS 20

void tunjukanbaris(unsigned int*);
void buatbaris3nomor(unsigned int*);
void buatbaris(unsigned int*);

int main() {
  unsigned int baris[MAKS_BARIS], baris3num[MAKS_BARIS];

  buatbaris3nomor(baris3num);
  buatbaris(baris);

  tunjukanbaris(baris3num);
  tunjukanbaris(baris);
  
  return 0;
}

void tunjukanbaris(unsigned int* data) {
  std::cout << "Ukuran dari baris: " << sizeof(data) << std::endl;
  std::cout << "Dengan panjang dari baris: " << MAKS_BARIS << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    std::cout << data[i] << std::endl;
  }
}

void buatbaris3nomor(unsigned int* data) {
  std::cout << "--buatBaris3Nomor--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    if(i == 0) data[i] = i + 3;
    else data[i] = data[i - 1] + 3;
  }
}

void buatbaris(unsigned int* data) {
  std::cout << "--buatbaris--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    data[i] = i + 1;
  }
}