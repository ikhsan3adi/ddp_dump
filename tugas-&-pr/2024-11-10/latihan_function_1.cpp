// Segitiga bintang

#include <iostream>
using namespace std;

void buatPola()
{
  int i, j, batas_j;

  batas_j = 5;
  i = 1;
  while (i <= 5)
  {
    j = 1;
    while (j <= batas_j)
    {
      cout << "*";
      j = j + 1;
    }
    cout << "\n";
    batas_j = batas_j - 1;
    i = i + 1;
  }
}

int main()
{
  buatPola();

  return 0;
}
