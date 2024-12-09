#include <iostream>
using namespace std;

int main()
{
  int i, j, awal_j, batas_j, A[8][8];

  i = 1;
  awal_j = 1;
  batas_j = 7;
  while (i <= 7)
  {
    j = 1;
    while (j <= 7)
    {
      if (j >= awal_j && j <= batas_j)
      {
        A[i][j] = 1;
      }
      else
      {
        A[i][j] = 0;
      }
      j = j + 1;
    }
    if (i < 4)
    {
      awal_j = awal_j + 1;
      batas_j = batas_j - 1;
    }
    else
    {
      awal_j = awal_j - 1;
      batas_j = batas_j + 1;
    }

    i = i + 1;
  }

  // output (opsional)
  i = 1;
  while (i <= 7)
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

  return 0;
}
