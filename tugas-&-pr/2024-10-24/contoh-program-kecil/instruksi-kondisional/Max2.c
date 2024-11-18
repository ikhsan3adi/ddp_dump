/* File	: Max2.c */
/* Deskripsi	: Maksimum dua bilangan yang dibaca */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001*/
#include <stdio.h>

int main()
{
  /* Kamus */
  int a, b;

  /* Algoritma */
  printf("Maksimum dua bilangan \n");
  printf("Ketikkan dua bilangan, pisahkan dengan RETURN : \n");
  scanf("%d %d", &a, &b);
  printf("Ke dua bilangan : a = %d, b = %d \n", a, b);
  if (a >= b)
  {
    printf("Nilai a yang maksimum %d \n", a);
  }
  else /* a < b */
  {
    printf("Nilai b yang maksimum %d \n", b);
  }
  return 0;
}
