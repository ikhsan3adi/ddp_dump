/* File	: oper2.c	*/
/* Deskripsi	: Pemakaian beberapa operator	*/
/*	terhadap relational dan bit	*/
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/*	Tgl	: 31/08/01	*/
#include <stdio.h>

int main()
{
  /* Kamus */
  char i, j;

  /* Program */
  i = 3; /* 00000011 biner */
  j = 4; /* 00000100 biner */

  printf("i = %d \n", i);
  printf("j = %d \n", j);

  printf("i && j = %d \n", i && j); /* 1:op lojik : true and true ==> true*/
  printf("i & j	= %d \n", i & j);   /* 0: 00000000 dalam biner */
  printf("i || j = %d \n", i || j); /* 1 opr lojik, true or true ==>true */
  printf("i |j	= %d \n", i | j);   /* 7:00000111 biner */
  printf("i ^j	= %d \n", i ^ j);   /* 7:00000111 biner */
  printf("~i	= %d \n", ~i);        /* -4:11111100 biner */

  return 0;
}
