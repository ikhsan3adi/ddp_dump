#include <stdio.h>

/* ignore it */
void outputArray(int X[6][6])
{
  int b, k;
  // output
  b = 1;
  while (b <= 5)
  {
    k = 1;
    printf("| ");
    while (k <= 5)
    {
      if (X[b][k] != 0)
      {
        printf("%d | ", X[b][k]);
      }
      else
      {
        printf("- | ");
      }
      k = k + 1;
    }
    printf("\n");
    b = b + 1;
  }
}

/* ignore it */
void resetArray(int X[6][6])
{
  // Inisialisasi array dengan 0
  for (int i = 0; i <= 5; i++)
  {
    for (int j = 0; j <= 5; j++)
    {
      X[i][j] = 0;
    }
  }
}

// a
void a(int X[6][6])
{
  int b, k;

  b = 1;
  while (b <= 5)
  {
    k = 1;
    while (k <= b)
    {
      X[b][k] = k;

      k = k + 1;
    }
    b = b + 1;
  }

  outputArray(X);
  resetArray(X);
}

// b
void b(int X[6][6])
{
  int b, k;

  b = 1;
  while (b <= 5)
  {
    k = 1;
    while (k <= b)
    {
      X[b][k] = b;

      k = k + 1;
    }
    b = b + 1;
  }

  outputArray(X);
  resetArray(X);
}

// c
void c(int X[6][6])
{
  int b, k;

  b = 1;
  while (b <= 5)
  {
    k = 1;
    while (k <= 6 - b)
    {
      X[b][k] = k;

      k = k + 1;
    }
    b = b + 1;
  }

  outputArray(X);
  resetArray(X);
}

// d
void d(int X[6][6])
{
  int b, k;

  b = 1;
  while (b <= 5)
  {
    k = 1;
    while (k <= 6 - b)
    {
      X[b][k] = b;

      k = k + 1;
    }
    b = b + 1;
  }

  outputArray(X);
  resetArray(X);
}

// e
void e(int X[6][6])
{
  int b, k;

  b = 1;
  while (b <= 5)
  {
    k = 1;
    while (k <= 6 - b)
    {
      X[b][k] = 6 - k;

      k = k + 1;
    }
    b = b + 1;
  }

  outputArray(X);
  resetArray(X);
}

int main()
{
  int X[6][6] = {
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
  };

  printf("\nA\n");
  a(X);

  printf("\nB\n");
  b(X);

  printf("\nC\n");
  c(X);

  printf("\nD\n");
  d(X);

  printf("\nE\n");
  e(X);

  return 0;
}
