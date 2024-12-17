/* SOAL

Struct Pegawai

Input:
Pegawai ke-1
Nama = ...
Jam Kerja = ...
...
Pegawai ke-10
Nama = ...
Jam Kerja = ...

Output:
-----------------------
Nama  Jam Kerja   Gaji
-----------------------

Jam kerja <= 40, upah per jam 30000
Jam kerja > 40, upah per jam 35000

*/

#include <iostream>
using namespace std;

struct Pegawai
{
  string nama;
  int jam_kerja;
  int gaji;
};

int hitung_gaji(int jam_kerja)
{
  if (jam_kerja <= 40)
    return 30000 * jam_kerja;
  else
    return 30000 * 40 + 35000 * (jam_kerja - 40);
}

int main()
{
  Pegawai data_pegawai[11];
  int i;

  // input
  i = 1;
  while (i <= 10)
  {
    cout << "Pegawai ke-" << i << "\n";
    cout << "Nama = ";
    cin >> data_pegawai[i].nama;
    cout << "Jam Kerja = ";
    cin >> data_pegawai[i].jam_kerja;
    data_pegawai[i].gaji = hitung_gaji(data_pegawai[i].jam_kerja);
    i = i + 1;
  }

  // output
  cout << "-------------------------------\n";
  cout << "Nama\tJam Kerja\tGaji\n";
  cout << "-------------------------------\n";
  i = 1;
  while (i <= 10)
  {
    cout << data_pegawai[i].nama << "\t" << data_pegawai[i].jam_kerja
         << "\t\t" << data_pegawai[i].gaji << "\n";
    i = i + 1;
  }

  return 0;
}
