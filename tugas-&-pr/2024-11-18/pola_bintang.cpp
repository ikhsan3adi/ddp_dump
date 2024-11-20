#include <iostream>
using namespace std;

void buatPola()
{
  int i, j;

  i = 1;
  while (i <= 5)
  {
    j = 1;
    while (j <= 5)
    {
      if (j >= i)
      {
        cout << "* ";
      }
      else
      {
        cout << ". ";
      }
      j = j + 1;
    }
    cout << "\n";
    i = i + 1;
  }
}

int main()
{
  buatPola();

  return 0;
}
