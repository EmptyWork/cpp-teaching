## Tipe Data

Secara umum tipe data dasar pada C++ sama dengan C, dan bahasa lain yang memiliki [strongly-typed](https://en.wikipedia.org/wiki/Strong_and_weak_typing#Definitions_of_%22strong%22_or_%22weak%22).

Berikut ini merupakan tipe-tipe data bawaan (native) pada [C++20](https://en.wikipedia.org/wiki/C%2B%2B20) atau standard terbaru [C++23](https://en.wikipedia.org/wiki/C%2B%2B23) Adapun penamaan variable mengikuti standard yang digunakan secara umum bedasarkan [Standar Penamaan pada C++](https://chaste.cs.ox.ac.uk/trac/raw-attachment/wiki/CodingStandardsStrategy/codingStandards.pdf).

```cpp
int main() {
  int angka_satu = 1; /* bilangan bulat */
  char karakter_x = 'x'; /* karakter */
  bool benar = true; /* benar dan salah */
  double angka_3_titik_4 = 3.4; /* bilangan riil */
  float angka_2_titik_1 = 2.1f; /* bilangan riil */
```

`wchar_t` atau `wide character string` merupakan bentuk data yang diutamakan untuk karakter-karakter (unicode) yang melebihi bentuk dari besaran char (ISO/IEC 10646:2003)

```cpp
  wchar_t sebuah_karakter_unicode; 
  
  return 0;
}
```