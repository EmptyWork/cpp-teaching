## Auto - Kata kunci

*Kata kunci [auto](https://docs.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-170)* merupakan tipe data sementara dimana kata kunci itu kan di ubah mengikuti tipe data yang dimasukan atau tipe data yang di kembalikan dari fungsi.

Salah satu contoh deklarasi fungsi dengan kata kunci auto, sebagai berikut:

```cpp
auto tambah(auto a, auto b) {
  return a + b;
}
```

contoh fungsi di atas bisa juga di deklarasi sebagai beberapa fungsi dibawah ini.

```cpp
int tambah(int a, int b)
float tambah(float a, float b)
double tambah(double a, double b)
```

maka berdasarkan kata kunci auto dan bagaimana fungsi `tambah` telah dideklarasi maka kita bisa memanggil fungsi tersebut dengan tipe data `int`, `float` ataupun `double`.

```cpp
int main() {
  std::cout << tambah(3,4);

  std::cout << std::endl;
  std::cout << tambah(3.8,-40) << std::endl;
  std::cout << tambah(-3.8,40) << std::endl;
  std::cout << tambah(4,5) << std::endl;
  std::cout << tambah(4.92f,5) << std::endl;
}
```