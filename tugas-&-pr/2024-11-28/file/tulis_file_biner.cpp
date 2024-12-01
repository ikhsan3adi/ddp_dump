#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int A[6], i, size;

  // input
  size = 5;
  i = 1;
  while (i <= size)
  {
    cout << "A[" << i << "]" << " = ";
    cin >> A[i];
    i = i + 1;
  }

  // proses
  cout << "Menyimpan ke file data.dat...\n";

  ofstream File("data.dat"); // buka file

  i = 1;
  while (i <= size)
  {
    // menyimpan array A ke file biner
    File.write((char *)&A[i], sizeof(A[i]));
    i = i + 1;
  }

  File.close();

  cout << "Berhasil!\n";

  return 0;
}