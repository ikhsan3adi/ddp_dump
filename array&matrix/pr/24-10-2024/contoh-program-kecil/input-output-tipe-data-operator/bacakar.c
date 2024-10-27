/*	File	: bacakar.c */
/*	Deskripsi	: contoh membaca char kemudian menulis nilai yang dibaca */
/*  Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tanggal	: 30-08-2001 */
#include <stdio.h>

int main()
{
  /*	Kamus */
  char cc;

  /*	Program */
  printf("Hello\n");
  printf("Baca 1 karakter : ");
  scanf("%c", cc);
  printf("%c", cc);
  printf("Bye\n ");
  return 0;
}
