#include <iostream>
using namespace std;

int main()
{
  int i, a;
  float X[6];
  float Z;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "X[" << i << "] = ";
    cin >> X[i];
    i = i + 1;
  }

  // proses
  Z = 0;
  a = 1;
  i = 1;
  while (i <= 5)
  {
    Z = Z + a / X[i];
    a = a + 2;
    i = i + 1;
  }

  // output
  cout << "Z = " << Z;

  return 0;
}
