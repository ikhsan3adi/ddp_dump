#include <stdio.h>

/* 0 <= D <= 255 */
void DecToBiner(int D, int *B)
{
  int i;
  for (i = 0; i < 8; i++)
  {
    B[i] = 0;
  }

  if (D > 0)
  {
    i = 7;
    while (i >= 0 && D > 0)
    {
      B[i] = D % 2;
      D = D / 2;
      i = i - 1;
    }
  }
}

void main()
{
  int A[8];

  DecToBiner(206, A); // array = reference/address of first element

  for (int i = 0; i < 8; i++)
  {
    printf("%d | ", A[i]);
  }
}
