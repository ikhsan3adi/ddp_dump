#include <iostream>
#include <chrono>

using namespace std;

int main()
{
  auto start = std::chrono::high_resolution_clock::now();
  int A[5], i, j, ketemu;

  // input
  i = 0;
  while (i < 5)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
    i++;
  }

  // proses
  ketemu = 0;
  j = 0;
  while (j < 5 && ketemu == 0)
  {
    if (A[j] == 0)
    {
      ketemu = 1;
    }
    j = j + 1;
  }

  // output
  if (ketemu == 1)
  {
    cout << "Ada bilangan 0";
  }
  else
  {
    cout << "Tidak ada bilangan 0";
  }

  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

  // To get the value of duration use the count()
  // member function on the duration object
  cout << endl
       << "Durasi eksekusi : " << duration.count() << "miliseconds" << endl;
  return 0;
}
