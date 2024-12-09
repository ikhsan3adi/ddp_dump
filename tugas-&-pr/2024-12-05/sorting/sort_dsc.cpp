// Nama program   : sort_dsc.cpp
// Deskripsi      : sort dari terbesar ke terkecil
// Pembuat        : Ikhsan Satriadi / 241511080

#include <iostream>
using namespace std;

int main()
{
  int A[6], i, j, temp;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i = i + 1;
  }

  // sorting
  i = 1;
  while (i <= 4)
  {
    j = i + 1;
    while (j <= 5)
    {
      if (A[j] > A[i])
      {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
      }
      j = j + 1;
    }
    i = i + 1;
  }

  // tampilkan
  i = 1;
  while (i <= 5)
  {
    cout << "\nA[" << i << "] = " << A[i];
    i = i + 1;
  }

  return 0;
}
