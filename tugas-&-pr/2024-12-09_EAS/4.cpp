#include <iostream>
using namespace std;

struct Mahasiswa
{
  string nama;
  float uts;
  float uas;
  float final;
  char index;
};

float hitung_nilai(float uts, float uas)
{
  return 0.4 * uts + 0.6 * uas;
}

char ambil_index(float nilai)
{
  if (nilai >= 80)
    return 'A';
  else if (nilai >= 70)
    return 'B';
  else if (nilai >= 55)
    return 'C';
  else if (nilai >= 40)
    return 'D';
  else
    return 'E';
}

int main()
{
  Mahasiswa mhs[11];
  int i;

  i = 1;
  while (i <= 2)
  {
    cout << "Mahasiswa ke-" << i << "\n";
    cout << "Nama = ";
    cin >> mhs[i].nama;
    cout << "UTS = ";
    cin >> mhs[i].uts;
    cout << "UAS = ";
    cin >> mhs[i].uas;

    mhs[i].final = hitung_nilai(mhs[i].uts, mhs[i].uas);
    mhs[i].index = ambil_index(mhs[i].final);

    i = i + 1;
  }

  i = 1;
  cout << "===========================================\n";
  cout << "Nama\tUTS\tUAS\tFinal\tIndex\n";
  cout << "===========================================\n";
  while (i <= 2)
  {
    cout << mhs[i].nama << "\t";
    cout << mhs[i].uts << "\t";
    cout << mhs[i].uas << "\t";
    cout << mhs[i].final << "\t";
    cout << mhs[i].index << "\n";

    i = i + 1;
  }

  return 0;
}
