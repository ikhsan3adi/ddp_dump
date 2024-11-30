#include <iostream>
using namespace std;

void inputDataMatrix(int A[5][5])
{
  int i, j;
  i = 1;
  while (i <= 4)
  {
    j = 1;
    while (j <= 4)
    {
      cout << "A[" << i << "][" << j << "] = ";
      cin >> A[i][j];
      j = j + 1;
    }
    i = i + 1;
  }
}

int hitungTotal(int A[5][5])
{
  int i, j, sum;
  sum = 0;
  i = 1;
  while (i <= 4)
  {
    j = 1;
    while (j <= 4)
    {
      sum = sum + A[i][j];
      j = j + 1;
    }
    i = i + 1;
  }
  return sum;
}

void tampilkanHasil(int hasil)
{
  cout << "Hasil = " << hasil;
}

int main()
{
  int A[5][5], hasil;

  inputDataMatrix(A);

  hasil = hitungTotal(A);

  tampilkanHasil(hasil);

  return 0;
}
