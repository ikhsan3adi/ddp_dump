/* File	: forefer.c */
/* Deskripsi	: Loop terus menerus */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001 */
#include <stdio.h>

int main()
{
  /* kamus */
#define true 1

  /* program */
  printf("Program akan looping, akhiri dengan ^c ");
  while (true)
  {
    printf("Print satu baris .... \n");
  }
  return 0;
}
