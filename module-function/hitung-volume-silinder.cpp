#include <iostream>
using namespace std;

float hitungVolumeSilinder(int r, int t)
{
  return 3.1416 * r * r * t;
}

int main()
{
  int jariJari, tinggi;
  float hasil;

  cout << "Jari-jari = ";
  cin >> jariJari;
  cout << "Tinggi = ";
  cin >> tinggi;

  hasil = hitungVolumeSilinder(jariJari, tinggi);

  cout << "Volume silinder = " << hasil;

  return 0;
}
