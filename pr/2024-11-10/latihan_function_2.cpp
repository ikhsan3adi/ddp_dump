// Modul hitung gaji

#include <iostream>
using namespace std;

int hitungGaji(int jamKerja)
{
  int i, gaji;

  gaji = 0;
  i = 1;
  while (i <= jamKerja)
  {
    if (i <= 40)
    {
      gaji = gaji + 30000;
    }
    else
    {
      gaji = gaji + 35000;
    }
    i = i + 1;
  }
  return gaji;
}

int main()
{
  int j, g;

  cout << "Jam kerja = ";
  cin >> j;

  g = hitungGaji(j);

  cout << "Gaji = " << g;

  return 0;
}
