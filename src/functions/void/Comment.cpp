#include "Log.h"

/*
  Fungsi yang bertipe void tidak bisa
  mengembalikan data, maka keywords
  return tidak bisa di tambahkan,
  jika di dalam fungsi void terdapat
  return maka tidak bisa di compile
*/

int main() {
  tampilkanInfo("Hello World");
  tampilkanInfo('\n');
  tampilkanInfo('\u0057');
  tampilkanInfo('\n');
  tampilkanInfo(87);
  tampilkanInfo('\n');
  tampilkanInfo(4.5);
  tampilkanInfo('\n');
  tampilkanInfo(false);
  return 0;
}
