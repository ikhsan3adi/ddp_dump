#include <iostream>
#include <fstream>
using namespace std;

void sort_asc(int A[], int size)
{
  int i, j, temp;

  i = 1;
  while (i <= size - 1)
  {
    j = i + 1;
    while (j <= size)
    {
      if (A[j] < A[i])
      {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
      }
      j = j + 1;
    }
    i = i + 1;
  }
}

int main()
{
  int i, A[11];
  ifstream File1, File2;
  ofstream File3;

  // baca file lalu simpan ke array
  File1.open("File1.dat");
  File2.open("File2.dat");
  i = 1;
  while (i <= 5)
  {
    File1.read((char *)&A[i], sizeof(A[i]));
    i = i + 1;
  }
  while (i <= 10)
  {
    File2.read((char *)&A[i], sizeof(A[i]));
    i = i + 1;
  }

  // sort ascending
  sort_asc(A, 10);

  // tulis ke file3
  File3.open("File3.dat");
  i = 1;
  while (i <= 10)
  {
    File3.write((char *)&A[i], sizeof(A[i]));
    i = i + 1;
  }

  return 0;
}
