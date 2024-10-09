#include <iostream>
using namespace std;

int main()
{
  int A[4][5], i, j, jml_5;

  // input
  i = 1;
  while (i <= 3)
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

  // proses
  jml_5 = 0;
  i = 1;
  while (i <= 3)
  {
    j = 1;
    while (j <= 4)
    {
      if (A[i][j] == 5)
      {
        jml_5 = jml_5 + 1;
      }

      j = j + 1;
    }
    i = i + 1;
  }

  // output
  cout << "Banyak bilangan 5 ada = " << jml_5;

  return 0;
}
