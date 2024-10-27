/* File	: tabel4.c */
/* Deskripsi	: tujuan sama dengan tabel.c,	*/
/*	hanya pada script ini digunakan struktur while */
/*	dan ada penyederhanaan proses	*/

/* Dibuat Oleh : Dosen DDP / 132 231 591	*/
/* Tanggal	: 07-09-2001 */
#include <stdio.h>

int main()
{
  /* kamus */
  int i;
  int tab[10]; /* Cara mengacu elemen ke-i : tab[i] */
  int N;

  /* program */
  N = 5;
  printf("Isi dan print tabel untuk indeks 1..5 \n");

  /* Penyederhanaan proses dari proses yang ditulis pada program tabel.c */
  i = 1;
  while (i <= N)
  {
    tab[i] = i;
    /* Traversal ; print */
    printf("i = %d	tab[%d] = %d \n", i, i, tab[i]);
    i++;
  }

  return 0;
}
