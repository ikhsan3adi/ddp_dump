#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  int j = 0;
  int A[3][4] = {
      {1, 2, 3, 4},
      {2, 3, 4, 1},
      {5, 6, 6, 7},
  };

  while (i < 3)
  {
    j = 0;
    while (j < 4)
    {
      cout << A[i][j] << endl;
      j++;
    }
    i++;
    }

  return 0;
}
