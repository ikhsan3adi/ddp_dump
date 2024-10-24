// matrix tanpa array

#include <iostream>
using namespace std;

int main()
{
  int i, j, bil, batas_j, awal_bil;

  batas_j = 5;
  awal_bil = 9;
  i = 1;
  while (i <= 9)
  {
    bil = awal_bil;
    j = 1;
    while (j <= batas_j)
    {
      cout << bil << " ";
      bil = bil - 2;
      j = j + 1;
    }
    if (i < 5)
    {
      batas_j = batas_j - 1;
      awal_bil = awal_bil - 1;
    }
    else
    {
      batas_j = batas_j + 1;
      awal_bil = awal_bil + 1;
    }
    cout << "\n";
    i = i + 1;
  }

  return 0;
}
