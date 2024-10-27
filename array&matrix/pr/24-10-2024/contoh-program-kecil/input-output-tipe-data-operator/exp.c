/* File	: exp.c	*/
/* Deskripsi	: Pemakaian operator kondisional	*/
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 31/08/01	*/
#include <stdio.h>

int main()
{
  /* Kamus	*/
  int x = 1, y = 2;

  /* Program */
  printf("x = %d \n", x);
  printf("y = %d \n", y);
  printf("Hasil ekspresi = (x<y) ? x:y = %d \n", (x < y) ? x : y);

  return 0;
}
