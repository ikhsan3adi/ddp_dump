#include <stdio.h>

void kali(int b, int p, int *h)
{
  int bp, n;

  bp = p;
  if (b == 0 || p == 0)
  {
    *h = 0; //* Operasi-1
  }
  else
  {
    if (p < 0) //* Kondisi-1
    {
      // negatif => positif
      bp = -(p); //* Operasi-2
    }

    n = 1;
    while (n <= bp) //* Kondisi-2
    {
      *h = *h + b; //* Operasi-3
      n = n + 1;
    }
  }

  if (p < 0)
  {
    // positif => negatif
    *h = -(*h); //* Ekspresi-1
  }
}

void main()
{
  int bil, pengali, hasil;

  hasil = 0;

  printf("Bilangan: ");
  scanf("%d", &bil);
  printf("Pengali: ");
  scanf("%d", &pengali);

  kali(bil, pengali, &hasil);

  printf("Hasil: %d", hasil);
}