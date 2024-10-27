/* File	: oper1.c	*/
/* Deskripsi	: Pemakaian beberapa operator terhadap bit */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 30/08/01	*/
#include <stdio.h>

int main()
{
  /* Kamus	*/
  int n = 10; /* 1010 */
  int x = 1;  /* 0001 */
  int y = 2;  /* 0010 */

  /* Program */
  printf("n = %d \n", n);
  printf("x = %d \n", x);
  printf("y = %d \n", y);

  printf("n & 8 = %d \n", n & 8);   /* 1010 And 1000 */
  printf("x & -8 = %d \n", x & -8); /* 1 And 0111	*/
  printf("y << 2 = %d \n", y << 2); /* 10 ==> 1000 = 8 */
  printf("y >> 3 = %d \n", y >> 3); /* 10 ==> 0000 = 0 */

  return 0;
}
