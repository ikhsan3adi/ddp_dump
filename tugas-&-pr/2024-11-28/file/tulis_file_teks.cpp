#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string teks;

  // input
  cout << "Masukkan teks = ";
  getline(cin, teks);

  // proses
  cout << "Menyimpan ke file data.txt...\n";

  ofstream File("data.txt"); // buka file

  File << teks; // masukkan teks kedalam file

  File.close();

  cout << "Berhasil!\n";

  return 0;
}