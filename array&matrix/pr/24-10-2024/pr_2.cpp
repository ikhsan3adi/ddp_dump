#include <iostream>
using namespace std;

int main()
{
  int i, j, bil, batas_j, awal_bil, A[6][6];

  // proses
  batas_j = 5;
  awal_bil = 9;
  i = 1;
  while (i <= 5)
  {
    bil = awal_bil;
    j = 1;
    while (j <= 5)
    {
      if (j <= batas_j)
      {
        A[i][j] = bil;
      }
      else
      {
        A[i][j] = 0;
      }

      bil = bil - 2;
      j = j + 1;
    }
    awal_bil = awal_bil - 1;
    batas_j = batas_j - 1;
    i = i + 1;
  }

  // output
  i = 1;
  while (i <= 5)
  {
    j = 1;
    while (j <= 5)
    {
      cout << A[i][j] << " ";

      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }

  return 0;
}
