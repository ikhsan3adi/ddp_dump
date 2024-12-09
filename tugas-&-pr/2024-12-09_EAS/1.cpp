#include <iostream>
using namespace std;

int faktorial(int bilangan)
{
  int i, hasil;
  hasil = 1;
  i = bilangan;
  while (i > 0)
  {
    hasil = hasil * i;
    i = i - 1;
  }
  return hasil;
}

int main()
{
  int i, j;
  float Z;
  Z = 0;

  i = 1;
  j = 9;
  while (i <= 9)
  {
    // Z = Z + i / faktorial(j);
    Z = (float)(Z + i / (float)faktorial(j));
    i = i + 2;
    j = j - 2;
  }
  cout << "Z = " << Z;

  return 0;
}
