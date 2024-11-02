#include <stdio.h>

// negatif => positif, positif => negatif
void negasi(int *b)
{
  *b = *b - *b - *b;
}

// negatif => positif
void mutlak(int *b)
{
  if (*b < 0)
  {
    negasi(b);
  }
}

void bagi(int b, int p, int *h, int *s)
{
  int b_1, p_1;

  b_1 = b;
  p_1 = p;
  if (b == 0 || p == 0)
  {
    *h = 0; //? return;
  }
  else
  {
    mutlak(&b_1);
    mutlak(&p_1);

    while (b_1 >= p_1)
    {
      b_1 = b_1 - p_1;
      *h = *h + 1;
    }
    *s = b_1;
  }

  if (!(p < 0 && b < 0) && (p < 0 || b < 0))
  {
    negasi(s);
    negasi(h);
  }
}

void main()
{
  int bil, pembagi, hasil, sisa;

  hasil = 0;
  sisa = 0;

  printf("Bilangan: ");
  scanf("%d", &bil);
  printf("Pembagi: ");
  scanf("%d", &pembagi);

  bagi(bil, pembagi, &hasil, &sisa);

  printf("Hasil: %d Sisa: %d", hasil, sisa);
}