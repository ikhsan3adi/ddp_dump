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
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i = i + 1;
  }

  // proses simpan ke file
  ofstream File("data.dat");

  i = 1;
  while (i <= size)
  {
    File.write((char *)&A[i], sizeof(A[i]));

    i = i + 1;
  }
}