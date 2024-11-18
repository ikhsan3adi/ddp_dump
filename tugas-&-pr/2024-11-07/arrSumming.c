/* File	        : arrSumming.c */
/* Deskripsi	  : Tujuan menjumlahkan semua nilai dari elemen array  */
/* Dibuat	Oleh  : Ikhsan Satriadi / 241511080	*/
/* Tanggal	    : 08-11-2024 */

#include <stdio.h>

/* Tujuan menjumlahkan semua nilai dari elemen array A[0..n-1]
  Nilai yang dikembalikan adalah total nilai elemen di array A
  Parameter A dan n adalah parameter input sesuai type yang didefinisikan
  Array A adalah objek untuk perhitungan total nilai elemennya
  n adalah jumlah elemen pada array A */
int arrSumming(int *A, int n)
{
  /* Kamus data */
  int i;          // Counter array
  int jumlah = 0; // hasil penghitungan, diberi nilai awal 0

  /* Program */
  i = 0;
  while (i < n)
  {
    jumlah = jumlah + A[i];
    i = i + 1;
  }

  return jumlah;
}

void main()
{
  /* Kamus data */
  int n, sum;
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  /* Program */
  n = 10;
  sum = arrSumming(A, n); // pemanggilan fungsi

  /* Tamplikan hasil perhitungan total nilai elemen array A */
  printf("%d", sum);
}