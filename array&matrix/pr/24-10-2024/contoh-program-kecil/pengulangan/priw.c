/* File	: priw.c*/
/* Deskripsi	: Baca N , print 1 s/d N dengan WHILE */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001*/
#include <stdio.h>

int main()
{
  /* Kamus */
  int i, N;

  /* Program */
  printf("Nilai N >0	= "); /* Inisialisasi */
  scanf("%d", &N);
  i = 1; /* First elemen */
  printf("Print i dengan WHILE : \n");
  while (i <= N) /* Kondisi pengulangan */
  {
    printf("%d \n", i); /* Proses */
    i++;                /* Next elemen */
  } /* ( i > N ) */
  printf("Akhir program \n");
  return 0;
}
