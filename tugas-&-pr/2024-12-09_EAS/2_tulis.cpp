#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int i;
  int A[6] = {0, 4, 5, 2, 1, 7}; // sembarang
  int B[6] = {0, 6, 0, 1, 5, 8};

  ofstream File1("File1.dat");
  ofstream File2("File2.dat");

  i = 1;
  while (i <= 5)
  {
    File1.write((char *)&A[i], sizeof(A[i]));
    File2.write((char *)&B[i], sizeof(B[i]));
    i = i + 1;
  }

  return 0;
}
