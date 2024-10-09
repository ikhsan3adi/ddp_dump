#include <iostream>
using namespace std;

int main()
{
  int i, jml_lbr, total_bayar;

  i = 1;
  while (i <= 5)
  {
    cout << "Orang ke " << i << "\n";
    cout << "Jumlah lembar foto copy = ";
    cin >> jml_lbr;

    if (jml_lbr >= 100)
    {
      total_bayar = jml_lbr * 400;
    }
    else
    {
      total_bayar = jml_lbr * 500;
    }

    cout << "Harus bayar = " << total_bayar << "\n\n";

    i++;
  }

  return 0;
}
