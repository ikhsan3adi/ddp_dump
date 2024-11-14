#include <stdbool.h>
#include "search.h"

int linSearch(int *A, int n, int k)
{
  /* Kamus data */

  /* Pengendali loop agar dapat dihentikan saat
  elemen yang ditemukan telah berhasil diperoleh */
  bool s;
  int i; // Counter array

  /* Program */
  s = true;
  i = 0;
  while (i < n && s)
  {
    if (A[i] == k)
    {
      s = false;
    }
    else
    {
      i = i + 1;
    }
  }

  return i;
}

int binarySearch(int *a, int n, int k)
{
  /* Kamus data */
  int awal, akhir, tengah;
  bool ketemu;

  /* Program */
  awal = 0;
  akhir = n - 1;

  if (k == a[awal]) // sama dengan batas atas
  {
    return awal;
  }
  else if (k == a[akhir]) // sama dengan batas bawah
  {
    return akhir;
  }
  else if (k < a[awal]) // diatas range
  {
    return n;
  }
  else if (k > a[akhir]) // dibawah range
  {
    return n;
  }
  else // dalam range
  {
    ketemu = false;
    tengah = (awal + akhir) / 2;
    while (awal < akhir && !ketemu)
    {
      tengah = (awal + akhir) / 2;
      if (k < a[tengah])
      {
        akhir = tengah - 1;
      }
      else if (k > a[tengah])
      {
        awal = tengah + 1;
      }
      else if (k == a[tengah])
      {
        ketemu = true;
      }
    }
    if (ketemu)
    {
      return tengah;
    }
    else
    {
      return n;
    }
  }
}

int sentinelSearch(int *A, int n, int k)
{
  /* Kamus data */
  int i; // Counter array

  /* Program */
  A[n] = k;
  i = 0;
  while (A[i] != k)
  {
    i = i + 1;
  }

  return i;
}