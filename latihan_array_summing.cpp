#include <iostream>
using namespace std;

int main()
{
  int A[5], i, j, total;

  // input
  i = 0;
  while (i < 5)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i++;
  }

  // proses
  total = 0;
  j = 0;
  while (j < 5)
  {
    total = total + A[j];
    j++;
  }

  // output
  cout << "Total = " << total;

  return 0;
}
