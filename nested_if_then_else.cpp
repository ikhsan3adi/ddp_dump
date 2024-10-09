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
// pr if then else
// jk < 20j, perjam = 8000
// jk >= 20j && < 40j, perjam = 10000