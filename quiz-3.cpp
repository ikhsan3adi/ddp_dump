#include <iostream>
using namespace std;

int main()
{
  /* KAMUS DATA */
  // 4 baris, 5 kolom
  int M[5][6] = {
      {0, 0, 0, 0, 0, 0},
      {0, 9, 40, 3, 4, 1},
      {0, 5, 71, 12, 15, 17},
      {0, 18, 20, 2, 55, 60},
      {0, 31, 4, 1, 7, 13},
  };

  int b, k, i, j, n;
  bool test = false;

  int X[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  /* ALGORITMA */
  n = 1;
  b = 1;
  while (b <= 4) // baris
  {
    k = 1;
    while (k <= 5) // kolom
    {
      if (M[b][k] <= 1)
      {
        test = false;
      }
      else
      {
        i = 0;
        j = 1;
        while (j <= M[b][k])
        {
          if (M[b][k] % j == 0) // MOD
          {
            i = i + 1;
          }
          j = j + 1;
          if (j == 9)
          {
            j = M[b][k];
          }
        }
        if (i == 2)
        {
          test = true;
        }
        else
        {
          test = false;
        }
      }

      if (test)
      {
        X[n] = M[b][k];
        n = n + 1;
      }
      k = k + 1;
    }
    b = b + 1;
  }

  // output X
  cout << "|";
  int idx = 1;
  while (idx <= 10)
  {
    cout << " " << X[idx] << " |";
    idx = idx + 1;
  }

  return 0;
}
