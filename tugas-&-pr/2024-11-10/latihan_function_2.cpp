// Modul hitung gaji

#include <iostream>
using namespace std;

long long hitungGaji(int jamKerja)
{
  long long gaji;
  gaji = 0;

  if (jamKerja <= 40)
  {
    gaji = jamKerja * 30000;
  }
  else
  {
    gaji = 40 * 30000 + (jamKerja - 40) * 35000;
  }

  return gaji;
}

int main()
{
  int j;
  long long g;

  // input
  cout << "Jam kerja = ";
  cin >> j;

  // proses
  g = hitungGaji(j);

  // output
  cout << "Gaji = " << g;

  return 0;
}
