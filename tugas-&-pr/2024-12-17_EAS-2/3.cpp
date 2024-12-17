/* SOAL

Output:
P = ...

Proses:
P = 1^1 + 3^2 + 5^3 + 7^4 + 9^5
*/

#include <iostream>
using namespace std;

int pangkat(int bil, int pangkat)
{
  int hasil, i;
  hasil = 1;
  i = 1;
  while (i <= pangkat)
  {
    hasil = hasil * bil;
    i = i + 1;
  }
  return hasil;
}

int main()
{
  int P, i, j;

  // proses
  P = 0;
  i = 1;
  j = 1;
  while (i <= 5)
  {
    P = P + pangkat(j, i);
    i = i + 1;
    j = j + 2;
  }

  // output
  cout << "P = " << P;

  return 0;
}
