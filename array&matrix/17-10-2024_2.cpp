#include <iostream>
using namespace std;

int main()
{
  int X[6], i, a;
  float pembilang, penyebut, Z;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "X[" << i << "] = ";
    cin >> X[i];
    i = i + 1;
  }

  // proses
  a = 1;
  pembilang = 0;
  penyebut = 0;
  i = 1;
  while (i <= 5)
  {
    pembilang = pembilang + a;
    penyebut = penyebut + X[i];
    a = a + 2;
    i = i + 1;
  }

  Z = pembilang / penyebut;

  // output
  cout << "Pembilang = " << pembilang << endl;
  cout << "Penyebut = " << penyebut << endl;
  cout << "Hasil = " << pembilang << "/" << penyebut << " = " << Z;

  return 0;
}
