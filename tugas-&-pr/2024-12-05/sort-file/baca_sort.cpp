#include <iostream>
#include <fstream>
using namespace std;

void sortAsc(int B[], int size)
{
  int temp, i, j;

  i = 1;
  while (i <= size - 1)
  {
    j = i + 1;
    while (j <= size)
    {
      if (B[j] < B[i])
      {
        temp = B[j];
        B[j] = B[i];
        B[i] = temp;
      }
      j = j + 1;
    }
    i = i + 1;
  }
}

int main()
{
  int B[6], i, j, size, temp;

  // proses baca file
  ifstream File("data.dat");

  size = 5;
  i = 1;
  while (i <= size)
  {
    File.read((char *)&B[i], sizeof(B[i]));

    i = i + 1;
  }

  sortAsc(B, size);

  // output
  i = 1;
  while (i <= size)
  {
    cout << "B[" << i << "] = " << B[i] << "\n";

    i = i + 1;
  }

  return 0;
}
