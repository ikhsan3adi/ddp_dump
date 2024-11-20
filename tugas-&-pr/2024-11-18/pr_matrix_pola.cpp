#include <iostream>
using namespace std;

void buatMatrix(int A[5][8])
{
  int i, j, awal_pola, batas_j;

  awal_pola = 1;
  batas_j = 7;
  i = 1;
  while (i <= 4)
  {
    j = 1;
    while (j <= 7)
    {
      if (j >= awal_pola && j <= batas_j)
      {
        A[i][j] = 1;
      }
      else
      {
        A[i][j] = 0;
      }
      j = j + 1;
    }
    awal_pola = awal_pola + 1;
    batas_j = batas_j - 1;
    i = i + 1;
  }
}

void tampil(int A[5][8])
{
  int i, j;

  i = 1;
  while (i <= 4)
  {
    j = 1;
    while (j <= 7)
    {
      cout << A[i][j] << " ";

      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }
}

int main()
{
  int A[5][8];

  buatMatrix(A);

  tampil(A);

  return 0;
}
