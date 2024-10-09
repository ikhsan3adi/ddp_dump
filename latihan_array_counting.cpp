#include <iostream>
using namespace std;

int main()
{
  int A[5], i, j, jml_nol;

  // input
  i = 0;
  while (i < 5)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i = i + 1;
  }

  // proses
  jml_nol = 0;
  j = 0;
  while (j < 5)
  {
    if (A[j] == 0)
    {
      jml_nol = jml_nol + 1;
    }
    j++;
  }

  // output
  cout << "Banyak bilangan nol = " << jml_nol;

  return 0;
}
