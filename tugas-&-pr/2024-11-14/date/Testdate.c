/* Nama Program : Testdate.cpp
 Deskripsi : Driver untuk menggunakan unit ADT Date
 yang ada di date.h dan date.cpp
 Pembuat : Ade Chandra */
#include <stdio.h>
#include <conio.h>
#include "date.h"

/* P R O G R A M U T A M A */
int main()
{
  date D1, D2, D3, D4;
  char lagi = 'y';

  /* Algoritma : Procedure yang isi bodynya call thd semua feature yang ada */
  for (;;)
  {
    // clrscr;
    CreateDate(&D1);
    printf("\nHasil CreateDate (&D1), maka D1 bernilai : ");
    PrintObj(D1);
    SetTgl(27, &D2);
    SetBln(12, &D2);
    SetThn(1972, &D2);
    printf("Setelah perintah Set dilakukan, maka D2 bernilai :");
    PrintObj(D2);
    BacaDate(&D3);
    printf("Setelah perintah BacaDate(&D3), maka D3 bernilai :");
    PrintObj(D3);

    /* Test terhadap operator Relasional */
    if (GetBln(D3) == 2)
    {
      if (isKabisat(D3))
        printf("Tahun %4d adalah tahun kabisat\n", GetThn(D3));
      else
        printf("Tahun %4d bukan tahun kabisat\n", GetThn(D3));
    }

    DateBefore(D3);
    NextDate(D3);
    BacaDate(&D4);
    printf("Setelah perintah BacaDate(&D4), maka D4 bernilai :");
    PrintObj(D4);
    printf("\n");
    SelisihDate(D3, D4);
    printf("\n\nCoba lagi ? (y/t) ");
    lagi = getch();

    if (lagi == 't' || lagi == 'T')
      break;
  }

  return 0;
}
