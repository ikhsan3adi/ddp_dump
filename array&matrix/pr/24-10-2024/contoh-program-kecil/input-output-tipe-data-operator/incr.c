/* File	: incr.c	*/
/* Deskripsi	: Efek dari operator	*/
/* Dibuat	Oleh : Dosen DDP / 132 231 592 */
/*	Tgl	: 30/08/01	*/
#include <stdio.h>

int main()
{
  /* kamus */
  int i, j;

  /* Algoritma */
  i = 3;
  j = i++;
  printf("Nilai i : %d\nNilai j : %d\n", ++i, j);
  return 0;
}
