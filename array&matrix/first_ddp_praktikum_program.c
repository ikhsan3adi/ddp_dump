#include <stdio.h>

void main()
{
  int X[7][4];
  int b, k, batas_j;

  batas_j = 1;
  b = 0;
  while (b < 7)
  {
    k = 0;
    while (k < batas_j)
    {
      X[b][k] = k + 1;
      printf("%d ", X[b][k]);
      k = k + 1;
    }
    if (b < 3)
    {
      batas_j = batas_j + 1;
    }
    else
    {
      batas_j = batas_j - 1;
    }
    printf("\n");
    b = b + 1;
  }
}
