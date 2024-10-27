/* File	: priwhile1.c */
/* Deskripsi	: Baca N , print 1 s/d N dengan WHILE (ringkas) */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001*/
#include <stdio.h>

int main()
{
  /* Kamus */
  int N;
  int i = 1;

  /* Program */
  printf("Nilai N >0	= "); /* Inisialisasi */
  scanf("%d", &N);
  printf("Print i dengan WHILE (ringkas) : \n");
  while (i <= N) /* Kondisi pengulangan */
  {
    printf("%d \n", i); /* Proses */
    i++;                /* Next elemen */
  } /* ( i > N ) */
  printf("Akhir program \n");
  return 0;
}
