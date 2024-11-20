#include <iostream>
using namespace std;

void input(int A[11])
{
  int i;
  i = 1;
  while (i <= 10)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i = i + 1;
  }
}

int hitungJumlah(int A[11])
{
  int i, sum;
  sum = 0;
  i = 1;
  while (i <= 10)
  {
    sum = sum + A[i];
    i = i + 1;
  }
  return sum;
}

void tulisHasil(int hasil)
{
  cout << "Hasil = " << hasil;
}

int main()
{
  int A[11], hasil;

  input(A);

  hasil = hitungJumlah(A);

  tulisHasil(hasil);

  return 0;
}
