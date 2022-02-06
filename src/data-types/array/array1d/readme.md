## Barisan

Tipe data barisan merupakan gabungan beberapa data yang dimasukan kedalam barisan dengan tipe data tertentu.

Adapun cara deklarasi sebuah array dapat dilakukan sebagai berikut:
- `tipedata nama[ukurandata]`
- `tipedata nama = new tipedata(ukurandata)`

```cpp
#include <iostream>
/* makro untuk ukuran baris */
#define MAKS_BARIS 20
```

Membuat prototipe fungsi yang akan dideklarasi nanti.

```cpp
void tunjukanbaris(unsigned int*);
void buatbaris3nomor(unsigned int*);
void buatbaris(unsigned int*);
```

```cpp
int main() {
  /* mendeklarasi baris dengan ukuran berdasarkan MAKS_BARIS */
  unsigned int baris[MAKS_BARIS], baris3num[MAKS_BARIS]; 

  buatbaris3nomor(baris3num);
  buatbaris(baris);

  tunjukanbaris(baris3num);
  tunjukanbaris(baris);
  
  return 0;
}
```

`fungsi tunjukanbaris` akan menampilkan nilai yang ada pada baris tersebut berdasarkan barisan yang diberikan pada `@param data`

```cpp
void tunjukanbaris(unsigned int* data) {
  std::cout << "Ukuran dari baris: " << sizeof(data) << std::endl;
  std::cout << "Dengan panjang dari baris: " << MAKS_BARIS << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    std::cout << data[i] << std::endl;
  }
}
```

`fungsi buatbaris3nomor` akan membuat sebuah baris dimana anggotanya, sebagai berikut: jika n == 0 -> 3 | n += 3, dan akan menerima `@param data` sebagai tempat penyimpanan data tersebut.

```cpp
void buatbaris3nomor(unsigned int* data) {
  std::cout << "--buatBaris3Nomor--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    if(i == 0) data[i] = i + 3;
    else data[i] = data[i - 1] + 3;
  }
}
```

`fungsi buatbaris` akan membuat sebuah baris normal, dimana anggotanya dimulai dari 1, dan akan menerima `@param data` sebagai tempat penyimpanan data tersebut.

```cpp
void buatbaris(unsigned int* data) {
  std::cout << "--buatbaris--" << std::endl;
  for(int i = 0; i < MAKS_BARIS; i++) {
    data[i] = i + 1;
  }
}
```