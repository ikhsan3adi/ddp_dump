// matrix tanpa array

#include <iostream>
using namespace std;

int main()
{
  int i, j, bil, batas_j;

  batas_j = 5;
  i = 1;
  while (i <= 5)
  {
    bil = 9;
    j = 1;
    while (j <= batas_j)
    {
      cout << bil << " ";
      bil = bil - 2;
      j = j + 1;
    }
    cout << "\n";
    batas_j = batas_j - 1;
    i = i + 1;
  }

  return 0;
}
