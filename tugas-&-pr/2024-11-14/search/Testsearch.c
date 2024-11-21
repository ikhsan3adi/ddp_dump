/* Nama Program : Testsearch.c
 Deskripsi : Driver untuk menggunakan unit ADT Search yang ada di search.h dan search.c
 Pembuat : Ikhsan Satriadi */

#include <stdio.h>
#include "search.h"

void main()
{
  /* Kamus data */
  int m, n, cari, index;
  int A[] = {1, 8, 9, 8, 7, 6, 0, 3, 4, 5};
  int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // sorted array (untuk binary search)
  m = sizeof(A) / sizeof(A[0]);              // Ukuran array A
  n = sizeof(B) / sizeof(B[0]);              // Ukuran array B

  /* Program */
  /* LINEAR SEARCH */
  printf("LINEAR SEARCH\n");
  printf("Masukkan nilai yang ingin dicari: ");
  scanf("%d", &cari);
  index = linSearch(A, m, cari); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  if (index < n)
  {
    printf("Cari %d di array. Ditemukan di index %d\n", cari, index);
  }
  else
  {
    printf("Cari %d tidak ditemukan di array\n", cari);
  }

  /* BINARY SEARCH */
  printf("BINARY SEARCH\n");

  printf("Masukkan nilai yang ingin dicari: ");
  scanf("%d", &cari);
  index = binarySearch(B, n, cari); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array B yang bernilai k */
  if (index < n)
  {
    printf("Cari %d di array. Ditemukan di index %d\n", cari, index);
  }
  else
  {
    printf("Cari %d tidak ditemukan di array\n", cari);
  }

  /* SENTINEL SEARCH */
  printf("SENTINEL SEARCH\n");
  printf("Masukkan nilai yang ingin dicari: ");
  scanf("%d", &cari);
  index = sentinelSearch(A, m, cari); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  if (index < n)
  {
    printf("Cari %d di array. Ditemukan di index %d\n", cari, index);
  }
  else
  {
    printf("Cari %d tidak ditemukan di array\n", cari);
  }
}
