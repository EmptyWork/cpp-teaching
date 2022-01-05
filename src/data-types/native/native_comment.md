```cpp
/**
 * @brief Tipe-tipe data dasar yang merupakaan bawaan
 * dari C dan C++ 
 * 
 * @details Berikut ini merupakan tipe-tipe data bawaan (native) 
 * pada C++20 atau standard terbaru C++(2021)
 * Adapun penamaan variable mengikuti standard yang
 * digunakan secara umum
 * 
 * @link https://chaste.cs.ox.ac.uk/trac/raw-attachment/wiki/CodingStandardsStrategy/codingStandards.pdf @endlink
 */

int main() {
  int angka_satu = 1;
  char karakter_x = 'x';
  bool benar = true;
  double angka_3_titik_4 = 3.4;
  float angka_2_titik_1 = 2.1f;
  
  /**
   * @brief wchar_t atau wide character
   * @details wchar_t atau wide character string merupakan bentuk data
   * yang diutamakan untuk karakter-karakter (unicode) yang melebihi 
   * bentuk dari besaran char (ISO/IEC 10646:2003)
   */
  wchar_t sebuah_karakter_unicode;  
  
  return 0;
}
```