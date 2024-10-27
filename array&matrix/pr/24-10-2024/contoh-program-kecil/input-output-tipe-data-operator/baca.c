/*	File	: baca.c */
/* Deskripsi : contoh membaca integer kemudian menulis nilai yang dibaca */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tanggal	: 30-08-2001 */
#include <stdio.h>

int main()
{
  /*	Kamus */
  int a;

  /*	Program */
  printf("Contoh membaca dan menulis, ketik nilai integer : ");
  scanf("%d", &a);
  printf("Nilai yang dibaca : %d\n ", a);
  return 0;
}
