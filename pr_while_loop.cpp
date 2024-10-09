#include <iostream>

int main()
{
  int i, bilangan, kuadrat;

  i = 10;
  while (i > 0)
  {
    bilangan = i;
    kuadrat = bilangan * bilangan;
    std::cout << bilangan << "\t" << kuadrat << "\n";
    i = i - 2;
  }

  return 0;
}
