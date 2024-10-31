#include <iostream>
using namespace std;

void tulis(int n)
{
  int i;
  i = 1;
  while (i <= n)
  {
    cout << "*";
    i = i + 1;
  }
}

int main()
{
  tulis(10);

  return 0;
}
