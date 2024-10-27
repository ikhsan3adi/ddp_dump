/* File	: if1.c */
/* Deskripsi	: contoh pemakaian if satu kasus */
/*	membaca nilai integer, menuliskan nilainya jika positif */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 6-09-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  int a;

  /* Algoritma */
  printf("Contoh IF 1 kasus \n");
  printf("Ketikkan suatu nilai integer : ");
  scanf("%d", &a);
  if (a >= 0)
  {
    printf("Nilai a positif ...%d \n", a);
  }
  return 0;
}
