#include <iostream>
using namespace std;

int main()
{
  int A[5];
  int i;

  i = 0;
  while (i <= 4)
  {
    cout << "Masukkan nilai A[" << i << "] = ";
    cin >> A[i];
    i++;
  }

  i = 0;
  while (i <= 4)
  {
    cout << "A[" << i << "] = " << A[i] << "\n";
    i++;
  }

  return 0;
}
