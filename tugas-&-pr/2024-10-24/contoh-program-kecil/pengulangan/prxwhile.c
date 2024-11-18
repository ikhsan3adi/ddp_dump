/* File	: prxwhile.c*/
/* Deskripsi	: Contoh baca nilai x, Jumlah nilai yang dibaca dgn WHILE	*/
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  int sum, x;

  /* Program */
  sum = 0; /* Inisialisasi */
  printf("Masukkan nilai x (int), akhiri dengan 999	= ");
  scanf("%d", &x);
  while (x != 999) /* Kondisi pengulangan */
  {
    sum = sum + x;
    printf("Masukkan nilai x (int), akhiri dengan 999 = ");
    /* Proses */
    scanf("%d", &x); /* Next elemen */
  }
  printf("Hasil penjumlahan = %d \n", sum);
  return 0;
}
