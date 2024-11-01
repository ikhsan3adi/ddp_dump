#include <iostream>
using namespace std;

int hitung_pangkat(int bil, int p)
{
  int i, n;

  // proses
  n = bil;
  i = 1;
  while (i < p)
  {
    n = n * bil;
    i = i + 1;
  }

  return n;
}

int main()
{
  int bilangan, pangkat, hasil;

  // input
  cout << "Bilangan = ";
  cin >> bilangan;
  cout << "Pangkat = ";
  cin >> pangkat;

  // proses
  hasil = hitung_pangkat(bilangan, pangkat);

  // output
  cout << "Hasil = " << hasil;

  return 0;
}
