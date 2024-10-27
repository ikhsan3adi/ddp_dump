/* File	: asign2.c	*/
/* Deskripsi	: Berisi contoh sederhana untuk	*/
/*	mendefinisikan variabel-variabel	*/
/*	bil bulat short int, int, long int */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 30/08/01	*/
#include <stdio.h>

int main()
{
  /* Kamus	*/
  short ks = 1;
  int ki = 1;
  long kl = 10000;
  char c = 65;   /*initialisasi karakter dgn integer*/
  char c1 = 'Z'; /*initialisasi karakter dgn karakter*/
  float x = 1.55;

  /* Program */

  /* penulisan karakter sebagai karakter */
  printf("Karakter = %c \n", c);
  printf("Karakter = %c \n", c1);

  /* Penulisan karakter sebagai integer */
  printf("Karakter = %d \n", c);
  printf("Karakter = %d \n", c1);

  printf("Bilangan integer (short) = %d \n", ks);
  printf("\t\t(int)	= %d \n", ki);
  printf("\t\t(long) = %ld\n", kl);
  printf("Bilangan real = %8.3f \n", x);

  return 0;
}