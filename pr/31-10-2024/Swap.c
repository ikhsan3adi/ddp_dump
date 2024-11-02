#include <stdio.h>

void SWAP(int *X, int *Y)
{
  int Temp;

  Temp = *X;
  *X = *Y;
  *Y = Temp;
}

void main()
{
  int A, B;

  A = 75;
  B = -100;

  printf("Before\nA: %d, B: %d\n", A, B);

  SWAP(&A, &B); // pass by reference

  printf("After\nA: %d, B: %d\n", A, B);
}