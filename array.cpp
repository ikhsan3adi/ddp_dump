#include <iostream>
using namespace std;

int main()
{
  // int A[5] = {7, 8, 6, 3, 9};
  int A[5];
  int i;

  A[0] = 7;
  A[1] = 8;
  A[2] = 6;
  A[3] = 3;
  A[4] = 9;

  i = 0;
  while (i < 5)
  {
    cout << A[i] << "\n";
    i++;
  }

  return 0;
}
