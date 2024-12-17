/* SOAL

Input:
X[1] = ...
X[2] = ...
...
X[5] = ...

Output:
Z = ...

Proses:
Z = (9/X[1] + 7/X[2] + 5/X[3] + 3/X[4] + 1/X[5]) / (X[1] + 2X[2] + 3X[3] + 4X[4] + 5X[5])
*/

#include <iostream>
using namespace std;

int main()
{
  int X[6], Y, i, j;
  float Z;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "X[" << i << "] = ";
    cin >> X[i];
    i = i + 1;
  }

  // proses
  i = 1;
  j = 9;
  Z = 0;
  while (i <= 5)
  {
    // Z = Z + j / X[i];
    Z = Z + (float)j / (float)X[i];
    i = i + 1;
    j = j - 2;
  }

  i = 1;
  Y = 0;
  while (i <= 5)
  {
    Y = Y + i * X[i];
    i = i + 1;
  }

  Z = Z / Y;

  // output
  cout << "Z = " << Z;

  return 0;
}
