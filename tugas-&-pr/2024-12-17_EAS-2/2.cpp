/* SOAL

Output:
XXXXOXXXX
XXXOOOXXX
XXOOOOOXX
XOOOOOOOX
OOOOOOOOO

*/

#include <iostream>
using namespace std;

int main()
{
  char A[6][10];
  int i, j, awal_o, akhir_o;

  // proses
  awal_o = 5;
  akhir_o = 5;
  i = 1;
  while (i <= 5)
  {
    j = 1;
    while (j <= 9)
    {
      if (j >= awal_o && j <= akhir_o)
      {
        A[i][j] = 'O';
      }
      else
      {
        A[i][j] = 'X';
      }
      j = j + 1;
    }
    i = i + 1;
    awal_o = awal_o - 1;
    akhir_o = akhir_o + 1;
  }

  // output
  i = 1;
  while (i <= 5)
  {
    j = 1;
    while (j <= 9)
    {
      cout << A[i][j];
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }

  return 0;
}
