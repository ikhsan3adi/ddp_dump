#include <iostream>
#include <string>
using namespace std;

int main()
{
  struct mahasiswa
  {
    string nama;
    float uts;
    float uas;
    float final;
  };

  mahasiswa mhs[6];
  int i;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "Mahasiswa " << i << "\n";
    cout << "nama = ";
    cin >> mhs[i].nama;
    cout << "uts = ";
    cin >> mhs[i].uts;
    cout << "uas = ";
    cin >> mhs[i].uas;
    i = i + 1;
  }

  // proses
  i = 1;
  while (i <= 5)
  {
    mhs[i].final = 0.4 * mhs[i].uts + 0.6 * mhs[i].uas;
    i = i + 1;
  }

  cout << "\n";

  // output
  i = 1;
  while (i <= 5)
  {
    cout << "Mahasiswa " << i << "\n";
    cout << "Nama = " << mhs[i].nama << "\n";
    cout << "UTS = " << mhs[i].uts << "\n";
    cout << "UAS = " << mhs[i].uas << "\n";
    cout << "Final = " << mhs[i].final << "\n\n";
    i = i + 1;
  }

  return 0;
}
