#include <iostream>
using namespace std;

int main()
{
  int n, i = 2;
  bool isPrime = true;

  cout << "Ketik Bilangan: ";
  cin >> n;

  if (n <= 1)
  {
    // 1 dan 0 bukan bilangan prima
    isPrime = false;
  }
  else
  {
    while (i < n)
    {
      if (n % i == 0)
      {
        isPrime = false;
      }
      i++;
    }
  }

  cout << (isPrime ? "Bilangan Prima" : "Bukan prima"); // ternary (one line if else)

  return 0;
}
