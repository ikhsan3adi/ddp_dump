/* File	: oprator.c */
/* Deskripsi	: Contoh pengoperasian variabel bertype dasar */
/* Dibuat	Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 30-08-2001 */
#include <stdio.h>

int main()
{
#include "boolean.h"
  /* Kamus */
  boolean Bool1, Bool2, TF;
  int i, j, hsl;
  float x, y, res;

  /* Algoritma */
  printf("Utk program ini, baca teksnya dan tambahkan output \n");
  Bool1 = True;
  Bool2 = False;
  printf("Bool1 = %d ", Bool1, " dan Bool2 = %d \n", Bool2);
  TF = Bool1 && Bool2; /* Operator And dalam boolean */
  printf("TF = Bool1 And Bool2 : %d \n", TF);
  TF = Bool1 || Bool2; /* Operator or dalam boolean */
  printf("TF = Bool1 Or Bool2 : %d \n", TF);
  TF = !Bool1; /* Operator Not dalam boolean */
  printf("TF = Not Bool1	: %d \n", TF);
  TF = Bool1 ^ Bool2; /* Operator XOR dalam boolean */
  printf("TF = Bool1 Xor Bool2 : %d \n", TF);

  /* Operasi Numerik */ i = 5;
  j = 2;
  printf("Nilai i = %d", i, " dan nilai j = %d\n", j);
  hsl = i + j;
  printf("Hasil operasi i + j :	adalah %d\n", hsl);
  hsl = i - j;
  printf("Hasil operasi i - j :	adalah %d\n", hsl);
  hsl = i / j; /* Dalam integer dikenal i/j */
  printf("Hasil operasi i div j :	adalah %d\n", hsl);
  hsl = i * j;
  printf("Hasil operasi i * j :	adalah %d\n ", hsl);
  hsl = i / j; /* pembagian bulat */
  printf("Hasil operasi i div j :	adalah %d\n", hsl);
  hsl = i % j; /* Sisa pembagian bulat */
  printf("Hasil operasi i mod j :	adalah %d\n", hsl);

  /* Operasi Numerik */ x = 5.0;
  y = 2.0;
  printf("Nilai x = %f", x, " dan nilai y = %f\n", y);
  res = x + y;
  printf("Hasil operasi x + y :	adalah %f\n", res);
  res = x - y;
  printf("Hasil operasi x - y :	adalah %f\n", res);
  res = x / y;
  printf("Hasil operasi x / y :	adalah %f\n", res);
  res = x * y;
  printf("Hasil operasi x * y :	adalah %f\n", res);

  /* Operasi relasional numerik */
  printf("Karena nilai i = %d", i, " dan nilai j = %d", j, " maka \n");
  TF = (i == j);
  printf("Hasil Operasi TF = (i == j) adalah : %d\n", TF);
  TF = (i != j);
  printf("Hasil Operasi TF = (i != j) adalah : %d\n", TF);
  TF = (i < j);
  printf("Hasil Operasi TF = (i < j) adalah : %d\n", TF);
  TF = (i > j);
  printf("Hasil Operasi TF = (i > j) adalah : %d\n", TF);
  TF = (i <= j);

  printf("Hasil Operasi TF = (i <= j) adalah : %d\n", TF);
  TF = (i >= j);
  printf("Hasil Operasi TF = (i >= j) adalah : %d\n", TF);

  /* Operasi relasional numerik */
  printf("Karena nilai x = %f", x, " dan nilai y = %f", y, " maka \n");
  TF = (x != y);
  printf("Hasil Operasi TF = (x != y) adalah : %d \n ", TF);
  TF = (x < y);
  printf("Hasil Operasi TF = (x < y) adalah : %d \n", TF);
  TF = (x > y);
  printf("Hasil Operasi TF = (x > y) adalah : %d \n", TF);
  TF = (x <= y);
  printf("Hasil Operasi TF = (x <= y) adalah : %d \n ", TF);
  TF = (x >= y);
  printf("Hasil Operasi TF = (x >= y) adalah : %d \n", TF);
  return 0;
}
