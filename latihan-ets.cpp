#include <iostream>
using namespace std;

void penjumlahan2dan5Matrix()
{
  int A[5][5], bil_awal, bilangan, i, j;

  // proses
  bil_awal = 10;
  i = 1;
  while (i <= 4)
  {
    bilangan = bil_awal;
    j = 1;
    while (j <= 4)
    {
      A[i][j] = bilangan;
      bilangan = bilangan + 2;
      j = j + 1;
    }
    bil_awal = bil_awal + 5;
    i = i + 1;
  }

  // output
  i = 1;
  while (i <= 4)
  {
    j = 1;
    while (j <= 4)
    {
      cout << A[i][j] << " ";
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }
}

void diagonalSumMatrix()
{
  int i, sum;

  int A[5][5] = {
      {0, 0, 0, 0, 0},
      {0, 4, 5, 6, 7},
      {0, 1, 2, 3, 4},
      {0, 8, 9, 10, 11},
      {0, 12, 13, 14, 15},
  };

  // proses
  sum = 0;
  i = 1;
  while (i <= 4)
  {
    sum = sum + A[i][i];
    i = i + 1;
  }

  // output
  cout << "Total = " << sum;
}

int main(int argc, char const *argv[])
{
  diagonalSumMatrix();
  penjumlahan2dan5Matrix();
  return 0;
}
