#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int idxAwal;
  int idxAkhir;

  cout << "idxAwal = ";
  cin >> idxAwal;
  cout << "idxAkhir = ";
  cin >> idxAkhir;

  // index array C dimulai dari 0, tambah element kosong di depan array
  char kata[12] = {' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'T', 'I', 'K', 'A'};
  // array baru subs
  char subs[12] = {' '};

  if (idxAwal > 0 && idxAwal < sizeof(kata) / sizeof(kata[0]) && idxAkhir > 0 && idxAkhir < sizeof(kata) / sizeof(kata[0]))
  {
    if (idxAwal < idxAkhir)
    {
      int length = idxAkhir - idxAwal + 1;
      int i = 0;         // initial loop
      while (i < length) // final loop
      {
        subs[i + 1] = kata[idxAwal + i]; // blok operasi
        i++;                             // next step
      }
    }
    else
    {
      cout << "index awal harus lebih kecil dari index akhir";
    }
  }
  else
  {
    cout << "index awal & index akhir harus lebih besar dari nol dan lebih kecil dari panjang kata";
  }

  cout << "\nArray kata:";
  cout << kata;
  cout << "\nArray subs:";
  cout << subs;

  return 0;
}