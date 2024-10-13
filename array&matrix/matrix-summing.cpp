#include <iostream>
using namespace std;

int main()
{
  int A[4][5], i, j, total;

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
  total = 0;
  i = 1;
  while (i <= 3)
  {
    j = 1;
    while (j <= 4)
    {
      total = total + A[i][j];
      j = j + 1;
    }
    i = i + 1;
  }

  // output
  cout << "Total = " << total;

  return 0;
}
