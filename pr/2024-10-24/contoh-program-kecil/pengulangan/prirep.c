/* File	: prirep.c */
/* Deskripsi	: Baca N , print 1 s/d N dengan REPEAT */
/*	Dibuat Oleh :	Dosen DDP / 132	231	592 */
/*	Tanggal	:	06-09-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  int i, N;

  /* Program */
  printf("Nilai N > 0 = "); /* Inisialisasi */
  scanf("%d", &N);
  i = 1; /* first elemen */
  printf("Print i dengan REPEAT : \n");
  do
  {
    printf("%d \n", i); /* Proses */
    i++;                /* Next elemen */
  } while (i <= N); /* Kondisi pengulangan */
  printf("Akhir program \n");
  return 0;
}
