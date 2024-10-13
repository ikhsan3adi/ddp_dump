#include <iostream>

int main()
{
  int bil;

  std::cout << "Bilangan = ";
  std::cin >> bil;

  if (bil == 0)
  {
    std::cout << "Nol";
  }
  else
  {
    if (bil > 0)
    {
      std::cout << "Positif";
    }
    else
    {
      std::cout << "Negatif";
    }
  }

  return 0;
}