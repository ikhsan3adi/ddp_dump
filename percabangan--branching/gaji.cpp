#include <iostream>
using namespace std;

int main()
{
  int golongan, jamKerja, gajiPokok, gajiTotal, upahPerJam, tunjangan;

  cout << "Golongan = ";
  cin >> golongan;
  cout << "Jam Kerja = ";
  cin >> jamKerja;

  if (golongan == 1)
  {
    gajiPokok = 2000000;
  }
  else
  {
    if (golongan == 2)
    {
      gajiPokok = 2500000;
    }
    else
    {
      gajiPokok = 3000000;
    }
  }

  if (jamKerja >= 40)
  {
    upahPerJam = 12000;
  }
  else
  {
    if (jamKerja >= 20)
    {
      upahPerJam = 10000;
    }
    else
    {
      upahPerJam = 8000;
    }
  }

  tunjangan = upahPerJam * jamKerja;
  gajiTotal = gajiPokok + tunjangan;

  cout << "Gaji Pokok = Rp." << gajiPokok << endl;
  cout << "Tunjangan = Rp." << tunjangan << endl;
  cout << "Gaji Total = Rp." << gajiTotal << endl;

  return 0;
}
