/* File	        : linSearch.c */
/* Deskripsi	  : Tujuan mencari posisi elemen pertama di array menggunakan algoritma linear search */
/* Dibuat	Oleh  : Ikhsan Satriadi / 241511080	*/
/* Tanggal	    : 08-11-2024 */

#include <stdio.h>
#include <stdbool.h>

/* Tujuan mencari posisi elemen pertama di array A[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array A
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter A, n dan k adalah parameter input sesuai type yang didefinisikan
  Array A adalah objek tempat mencari
  n adalah jumlah elemen pada array A
  k adalah kriteria searching */
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

void main()
{
  /* Kamus data */
  int n, index;
  int A[] = {1, 8, 9, 8, 7, 6, 0, 3, 4, 5};

  /* Program */
  n = 10;
  index = linSearch(A, n, 9); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d", index);
}