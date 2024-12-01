#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string teks;

  cout << "Membaca dari file data.txt...\n";

  ifstream File("data.txt"); // buka file

  while (getline(File, teks)) // baca teks dari file per baris
  {
    cout << teks << "\n";
  }

  File.close();

  return 0;
}