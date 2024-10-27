/* File	: tempair.c */
/* Deskripsi	: contoh pemakaian IF tiga kasus : wujud air */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 6-09-2001 */
#include <stdio.h>

int main()
{
  /* Kamus */
  int T;

  /* Algoritma */
  printf("Contoh IF tiga kasus \n");
  printf("Temperatur (dlm. derajat C) = ");
  scanf("%d", &T);

  if (T < 0)
  {
    printf("Wujud air beku %d \n", T);
  }
  else if ((T >= 0) && (T <= 100))
  {
    printf("Wujud air cair %d \n", T);
  }
  else if (T > 100)
  {
    printf("Wujud air uap/gas %d\n", T);
  }

  return 0;
}
