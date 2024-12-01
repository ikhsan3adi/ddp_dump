#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int B[6], i, size;

  // proses
  cout << "Membaca dari file data.dat...\n";

  ifstream File("data.dat"); // buka file

  size = 5;
  i = 1;
  while (i <= size)
  {
    // baca data array A di file dan memasukkannya ke array B
    File.read((char *)&B[i], sizeof(B[i]));
    i = i + 1;
  }

  // output array B
  i = 1;
  while (i <= size)
  {
    cout << "B[" << i << "] = " << B[i] << "\n";
    i = i + 1;
  }

  File.close();

  return 0;
}