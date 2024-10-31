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

  mahasiswa mhs;

  // input
  cout << "nim = ";
  cin >> mhs.nim;
  cout << "nama = ";
  cin >> mhs.nama;
  cout << "umur = ";
  cin >> mhs.umur;

  // output
  cout << mhs.nim << "\n";
  cout << mhs.nama << "\n";
  cout << mhs.umur << "\n";

  return 0;
}
