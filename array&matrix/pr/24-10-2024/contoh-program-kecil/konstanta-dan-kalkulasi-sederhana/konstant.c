/* File	: konstant.c */
/* Deskripsi	: Membaca jari-jari, menghitung luas lingkaran */
/*	Latihan pemakaian konstanta */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 30-08-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  const float pi = 3.1415;
  float r;

  /* program */
  /* baca data */
  printf("Jari-jari lingkaran = ");
  scanf("%f", &r);
  /* hitung dan tulis hasil */
  printf("Luas lingkaran = %f\n", pi * r * r);
  printf("Akhir Program \n");
  return 0;
}
