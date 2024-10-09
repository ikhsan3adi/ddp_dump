#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float pembelian, diskon, totalBayar;

  cout << "Masukkan pembelian = ";
  cin >> pembelian;

  if (pembelian >= 1000000)
  {
    diskon = pembelian * 10 / 100;
  }
  else
  {
    diskon = pembelian * 5 / 100;
  }

  totalBayar = pembelian - diskon;

  cout << "Diskon dari pembelian = " << (int)diskon << endl;
  cout << "Harus bayar = " << (int)totalBayar << endl;
}
