/* File : ADTDate.cpp */
/* Deskripsi : Unit untuk keperluan ADT Date */
/* Pembuat : Ade Chandra */
/***************************/
/* BODY PRIMITIF DATE */
/***************************/
#include <stdio.h>
#include <math.h>
#include "date.h"

/*********** Operasi Primitif ************/
void CreateDate(date *D)
/* Constructor Membentuk sebuah DATE, dengan nilai default adalah 01/01/1900 */
{
  SetTgl(01, &(*D));
  SetBln(01, &(*D));
  SetThn(1900, &(*D));
}

/******* Selector komponen **********/
int GetTgl(date D)
/* Mengambil bagian Tgl dari date */
{
  return (D.Tgl);
}

int GetBln(date D)
/* Mengambil bagian Bln dari date */
{
  return (D.Bln);
}

int GetThn(date D)
/* Mengambil bagian Thn dari date */
{
  return (D.Thn);
}

/****** Pengubah komponen ******/
void SetTgl(int NewTgl, date *D)
/* Memberi nilai untuk Tgl */
{
  (*D).Tgl = NewTgl;
}

void SetBln(int NewBln, date *D)
/* Memberi nilai untuk Bln */
{
  (*D).Bln = NewBln;
}

void SetThn(int NewThn, date *D)
/* Memberi nilai untuk Thn */
{
  (*D).Thn = NewThn;
}

/****** Kelompok Interaksi dengan I/O device, BACA/TULIS
******/
void BacaDate(date *D)
/* Membentuk DATE dari iTgl, iBln dan iThn yang dibaca dari
keyboard */
{
  printf("Tanggal : ");
  scanf("%d", &((*D).Tgl));
  printf("Bulan : ");
  scanf("%d", &((*D).Bln));
  printf("Tahun : ");
  scanf("%d", &((*D).Thn));
  if (!isValid(*D))
  {
    printf("Data yang anda masukkan gak valid tuh, jadi direset deh \n");
    CreateDate(&(*D));
  }
}

bool isValid(date D)
/* Memeriksa apakah suatu tanggal valid, yaitu dengan
memperhatikan batas akhir per bulan */
{
  if ((GetThn(D) < 1900) || (GetThn(D) > 30000) || (GetBln(D) < 1) ||
      (GetBln(D) > 12) || (GetTgl(D) < 1) || (GetTgl(D) > TglAkhir(D)))
    return (false);
  else
    return (true);
}

void PrintObj(date D)
/* Print nilai D dengan format dd/mm/yyyy */
{
  printf("%d/%d/%d\n", GetTgl(D), GetBln(D), GetThn(D));
}

/****** Operator Relasional ******/
bool isKabisat(date D)
/* Memeriksa apakah suatu tanggal adalah kabisat; Dipakai untuk
bulan == 2 saja
Harusnya kabisat adalah thn yang habis dibagi 4 dan 100,
tapi implementasinya seringkali hanya menggunakan 4
sebagai pembagi */
{
  return (((GetThn(D) % 4 != 0) || ((GetThn(D) % 100 == 0) &&
                                    (GetThn(D) % 400 != 0)))
              ? false
              : true);
}

/***** Predikat lain *******/
int TglAkhir(date D)
/* Memberikan tanggal terakhir dari sebuah bulan */
{
  if ((GetBln(D) == 1) || (GetBln(D) == 3) || (GetBln(D) == 5) ||
      (GetBln(D) == 7) || (GetBln(D) == 8) || (GetBln(D) == 10) ||
      (GetBln(D) == 12))
    return (31);
  else if ((GetBln(D) == 4) || (GetBln(D) == 6) || (GetBln(D) == 9) ||
           (GetBln(D) == 11))
    return (30);
  else
    return (isKabisat(D) ? 29 : 28);
}

void DateBefore(date D)
/* Menampilkan tanggal sebelumnya dari sebuah Date
 I.S = Tanggal tertentu diketahui
 F.S = Tanggal sebelumnya diketahui
 Hal yang perlu diketahui : Batas akhir tiap bulan dan jika
jan, thn-1 */
{
  printf("Sebelum tanggal : ");
  PrintObj(D);
  if ((GetBln(D) == 1) && (GetTgl(D) == 1))
  {
    SetThn(GetThn(D) - 1, &D);
    SetBln(12, &D);
    SetTgl(TglAkhir(D), &D);
  }
  else if (GetTgl(D) == 1)
  {
    SetBln(GetBln(D) - 1, &D);
    SetTgl(TglAkhir(D), &D);
  }
  else
    SetTgl(GetTgl(D) - 1, &D);
  printf(" adalah tanggal :");
  PrintObj(D);
}

void NextDate(date D)
/* Menampilkan tanggal berikutnya dari sebuah Date
 I.S = Tanggal tertentu diketahui
 F.S = Tanggal berikutnya diketahui
 Hal yang perlu diketahui : Batas akhir tiap bulan dan jika
des, thn+1 */
{
  printf("Setelah tanggal : ");
  PrintObj(D);
  if ((GetBln(D) == 12) && (GetTgl(D) == TglAkhir(D)))
  {
    SetThn(GetThn(D) + 1, &D);
    SetBln(1, &D);
    SetTgl(1, &D);
  }
  else if (GetTgl(D) == TglAkhir(D))
  {
    SetBln(GetBln(D) + 1, &D);
    SetTgl(1, &D);
  }
  else
    SetTgl(GetTgl(D) + 1, &D);
  printf(" adalah tanggal :");
  PrintObj(D);
}

void SelisihDate(date D1, date D2)
/* Menampilkan selisih dua tanggal
 I.S = 2 buah Tanggal tertentu diketahui
 F.S = Tampil selisih dua buah tanggal
 Asumsi : 1 tahun = 365 hari */
{
  int d = 0, a = 0, i;
  bool besar = false;
  printf("Selisih antara ");
  PrintObj(D1);
  printf(" dan ");
  PrintObj(D2);
  // Jika tgl dan bulannya sama
  if ((GetTgl(D1) == GetTgl(D2)) && (GetBln(D1) == GetBln(D2)))
    d = (GetThn(D2) - GetThn(D1)) * 365;
  else
  {
    if (GetBln(D2) < GetBln(D1))
    {
      d = (GetThn(D2) - GetThn(D1) - 1) * 365;
      besar = true;
    }
    else
      d = (GetThn(D2) - GetThn(D1)) * 365;
    if (GetBln(D2) == GetBln(D1))
      d = d + GetTgl(D2) - GetTgl(D1);
    else
      d = d + GetTgl(D2) + (TglAkhir(D1) - GetTgl(D1));
    i = GetBln(D1) + 1;
    while (i < GetBln(D2))
    {
      SetBln(i, &D1);
      a = a + TglAkhir(D1);
      i++;
    }
    if (besar)
      a = -a;
    d = d + a;
  }
  printf(" adalah %d hari\n", d);
}
