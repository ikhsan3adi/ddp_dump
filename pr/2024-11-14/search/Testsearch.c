#include <stdio.h>
#include "search.h"

void main()
{
  /* Kamus data */
  int n, index;
  int A[] = {1, 8, 9, 8, 7, 6, 0, 3, 4, 5};

  /* Program */
  /* LINEAR SEARCH */
  printf("LINEAR SEARCH\n");
  n = 10;
  index = linSearch(A, n, 9); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d\n", index);

  /* BINARY SEARCH */
  printf("BINARY SEARCH\n");
  int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // sorted array

  index = binarySearch(B, n, 9); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d\n", index);

  /* SENTINEL SEARCH */
  printf("SENTINEL SEARCH\n");
  index = sentinelSearch(A, n, 9); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d\n", index);
}
