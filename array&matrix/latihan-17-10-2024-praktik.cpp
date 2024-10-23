#include <iostream>
using namespace std;

/* ignore it */
void outputArray(int X[6][6])
{
  int b, k;
  // output
  b = 1;
  while (b <= 5)
  {
    k = 1;
    cout << "| ";
    while (k <= 5)
    {
      if (X[b][k] != 0)
      {
        cout << X[b][k] << " | ";
      }
      else
      {
        cout << "-" << " | ";
      }

      k = k + 1;
    }
    cout << endl;
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
    while (k <= 5)
    {
      if (k <= b)
      {
        X[b][k] = k;
      }

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
    while (k <= 5)
    {
      if (k <= b)
      {
        X[b][k] = b;
      }

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

  cout << "\nA" << endl;
  a(X);

  cout << "\nB" << endl;
  b(X);

  cout << "\nC" << endl;
  c(X);

  cout << "\nD" << endl;
  d(X);

  cout << "\nE" << endl;
  e(X);

  return 0;
}
