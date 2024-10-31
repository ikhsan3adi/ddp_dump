#include <iostream>
using namespace std;

int hitungLuas(int p, int l)
{
  return (p * l);
}

int main()
{
  int pjg, lbr, hasil;
  cout << "Panjang = ";
  cin >> pjg;
  cout << "Lebar = ";
  cin >> lbr;
  hasil = hitungLuas(pjg, lbr);
  cout << "Luas = " << hasil;

  return 0;
}
