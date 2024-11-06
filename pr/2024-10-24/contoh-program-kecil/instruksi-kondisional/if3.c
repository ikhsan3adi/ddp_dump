/* File	: if3.c*/
/* Deskripsi	: Contoh pemakaian if dua kasus komplementer */
/*	membaca sebuah nilai integer */
/*	menuliskan "Nilai a positif, nilai a ",	jika a > 0	*/
/*	"Nilai a samadengan nol, nilai a", jika a = 0 */
/*	"Nilai a negatif, nilai a ",	jika a < 0	*/
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 6-09-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  int a;

  /* Algoritma */
  printf("Contoh IF tiga kasus \n");
  printf("Ketikkan suatu nilai integer : ");
  scanf("%d", &a);
  if (a > 0)
  {
    printf("Nilai a positif ...%d\n", a);
  }
  else if (a == 0)
  {
    printf("Nilai a sama dengan nol %d\n", a);
  }
  else /* a < 0 */
  {
    printf("Nilai a negatif ...%d\n", a);
  }
  return 0;
}
