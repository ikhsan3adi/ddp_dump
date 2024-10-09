#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int bil = 10;

  int i = 1;
  while (i <= 6)
  {
    cout << bil;
    cout << "\n";
    bil += 5;
    i = i + 1;
  }

  return 0;
}
