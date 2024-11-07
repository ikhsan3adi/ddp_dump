#include <stdio.h>

void bagi(int b, int p, int *h, int *s)
{
  int bb, pp;

  bb = b;
  pp = p;
  if (b == 0 || p == 0)
  {
    *h = 0; //? return;
  }
  else
  {
    if (b < 0)
    {
      bb = -(b);
    }
    if (p < 0)
    {
      pp = -(p);
    }

    while (bb >= pp)
    {
      bb = bb - pp;
      *h = *h + 1;
    }
    *s = bb;
  }

  if (!(p < 0 && b < 0) && (p < 0 || b < 0))
  {
    *h = -(*h);
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