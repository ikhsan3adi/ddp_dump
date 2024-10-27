/* File	: asgstr.c */
/* Deskripsi :deklarasi & alokasi string,kemudian mengisinya dgn membaca */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 30-08-2001 */
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
  /* Kamus */
  char *str;
  char *str1;
  /* Program */
  printf("\nBaca string, maks 20 karakter : ");
  str = (char *)malloc(20 * sizeof(char));
  strcpy(str, "Ini string .... ");
  printf("String yang diisikan : %s\n", str);
  str1 = (char *)malloc(20 * sizeof(char));
  strcpy(str1, str);
  printf("String yang disalin : %s\n", str1);
  return 0;
}
