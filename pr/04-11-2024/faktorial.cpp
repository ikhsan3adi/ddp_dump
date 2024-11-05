#include <iostream>
using namespace std;

unsigned long long faktorial(int bil)
{
  unsigned long long hasil;
  hasil = 1;

  while (bil > 0)
  {
    hasil = hasil * bil;
    bil = bil - 1;
  }

  return hasil;
}

int main()
{
  int bilangan;
  unsigned long long hasil;

  cout << "Bilangan = ";
  cin >> bilangan;

  hasil = faktorial(bilangan);

  cout << "Hasil = " << hasil;

  return 0;
}

// int: maximum = 16!
// long long: maximum = 31!
// unsigned long long: maximum = 65!