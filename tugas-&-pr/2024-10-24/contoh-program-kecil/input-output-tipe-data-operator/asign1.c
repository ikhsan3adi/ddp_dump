/*	File	: asign1.c	*/
/*	Deskripsi	: Contoh asignment dan print	*/
/*	Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 30/08/01	*/
#include <limits.h>
#include <stdio.h>

int main()
{
  /* Kamus	*/
  int i;
  long int ii;

  /* Program */
  printf("Hello \n");
  i = 1234;
  ii = 123456;

  printf("Ini nilai i=1234	= %d \n", i);
  printf("Ini nilai ii=123456 = %ld\n", ii);

  /* Print nilai batas integer */
  printf("Min dan Max integer = %d , %d \n", INT_MIN, INT_MAX);
  printf("Max long integer	= %ld \n", LONG_MAX);
  return 0;
}
