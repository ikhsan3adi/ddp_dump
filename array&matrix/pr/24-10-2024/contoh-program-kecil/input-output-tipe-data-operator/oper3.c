/* File	: oper3.c	*/
/* Deskripsi	: Operator terner	*/
/*	ekspresi ditulis sebagai makro */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 31/08/01	*/
#include <stdio.h>

// terner-nya ada di sini
#define max(a, b) ((a > b) ? a : b)

int main()
{
  /* Kamus	*/
  int i = 0; /* perhatikan int i, j = 0 bukan seperti ini */
  int j = 0;
  char c = 8;
  char d = 10;
  char e = max(c, d);
  int k = max(i, j);

  /* Program */
  printf("Nilai e = %d \n", e);
  printf("Nilai k = %d \n", k);

  i = 2;
  j = 3;
  k = max(i++, j++);
  printf("Nilai k = %d \n", k);
  return 0;
}
