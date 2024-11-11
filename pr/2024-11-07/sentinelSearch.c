/* File	        : sentinelSearch.c */
/* Deskripsi	  : Tujuan mencari posisi elemen pertama di array menggunakan algoritma sentinel search */
/* Dibuat	Oleh  : Ikhsan Satriadi / 241511080	*/
/* Tanggal	    : 08-11-2024 */

#include <stdio.h>

/* Tujuan mencari posisi elemen pertama di array A[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array A
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter A, n dan k adalah parameter input sesuai type yang didefinisikan
  Array A adalah objek tempat mencari
  n adalah jumlah elemen pada array A
  k adalah kriteria searching */
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

void main()
{
  /* Kamus data */
  int n, index;
  int A[] = {1, 8, 9, 8, 7, 6, 0, 3, 4, 5};

  /* Program */
  n = 10;
  index = sentinelSearch(A, n, 10); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d", index);
}