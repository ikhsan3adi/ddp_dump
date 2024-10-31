#include <iostream>
#include <string>
using namespace std;

int main()
{
  struct mahasiswa
  {
    string nim;
    string nama;
    int umur;
  };

  mahasiswa mhs[6];
  int i;

  // input
  i = 1;
  while (i <= 5)
  {
    cout << "Mahasiswa " << i << "\n";
    cout << "nim = ";
    cin >> mhs[i].nim;
    cout << "nama = ";
    cin >> mhs[i].nama;
    cout << "umur = ";
    cin >> mhs[i].umur;
    i = i + 1;
  }

  cout << "\n";

  // output
  i = 1;
  while (i <= 5)
  {
    cout << "Mahasiswa " << i << "\n";
    cout << mhs[i].nim << "\n";
    cout << mhs[i].nama << "\n";
    cout << mhs[i].umur << "\n\n";
    i = i + 1;
  }

  return 0;
}
