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

/**
 * @brief akan menampilkan nilai yang ada pada
 * baris tersebut
 * 
 * @param data baris yang dibuat 
 */
void tunjukanbaris(unsigned int* data) {
  // masih `buggy` - tidak menunjukan ukuran sebenarnya dari array[baris]
  std::cout << "The size of the array is: " << sizeof(data) << std::endl;
  std::cout << "With the length of the array is: " << MAKS_BARIS << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    std::cout << data[i] << std::endl;
  }
}

/**
 * @brief membuat sebuah baris normal
 * 
 * @param data baris yang akan dibuat 
 */
void buatbaris3nomor(unsigned int* data) {
  std::cout << "--buatBaris3Nomor--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    if(i == 0) data[i] = i + 3;
    else data[i] = data[i - 1] + 3;
  }
}

/**
 * @brief membuat sebuah baris dimana anggotanya
 * sebagai berikut: jika n == 0 -> 3 | n += 3
 * 
 * @param data baris yang akan dibuat 
 */
void buatbaris(unsigned int* data) {
  std::cout << "--buatbaris--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    data[i] = i + 1;
  }
}