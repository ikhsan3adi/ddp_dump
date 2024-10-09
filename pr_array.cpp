#include <iostream>
using namespace std;

int main()
{
  int A[6], B[6], i, j, k, l;

  // Input
  i = 1;
  while (i <= 5)
  {
    cout << "Masukkan nilai A[" << i << "] = ";
    cin >> A[i];
    i++;
  }

  // Proses
  j = 1;
  k = 2;
  while (j <= 5)
  {
    if (k == 0)
    {
      k = 5;
    }

    B[j] = A[k];
    k = k - 1;
    j++;
  }

  // Output
  l = 1;
  while (l <= 5)
  {
    cout << "B[" << l << "] = " << B[l] << "\n";
    l++;
  }

  return 0;
}
