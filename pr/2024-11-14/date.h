#ifndef date_h
#define date_h
#include "boolean.h"

/***************************/
/* Type data */
/***************************/
/* Kamus */
typedef struct
{
  int Tgl;
  int Bln;
  int Thn;
} date;

/***************************/
/* S P E S I F I K A S I */
/***************************/

/*********** Operasi Primitif ************/
void CreateDate(date *D);
/* Constructor Membentuk sebuah DATE, dengan nilai default
adalah 01/01/1900 */

/******* Selector komponen **********/
int GetTgl(date D);

/* Mengambil bagian Tgl dari date */
int GetBln(date D);

/* Mengambil bagian Bln dari date */
int GetThn(date D);

/* Mengambil bagian Thn dari date */
/****** Pengubah komponen ******/
void SetTgl(int NewTgl, date *D);

/* Memberi nilai untuk Tgl */
void SetBln(int NewBln, date *D);

/* Memberi nilai untuk Bln */
void SetThn(int NewThn, date *D);

/* Memberi nilai untuk Thn */
/****** Kelompok Interaksi dengan I/O device, BACA/TULIS
******/
void BacaDate(date *D);

/* Membentuk DATE dari iTgl, iBln dan iThn yang dibaca dari
keyboard */
boolean isValid(date D);

/* Memeriksa apakah suatu tanggal valid, yaitu dengan
memperhatikan batas akhir per bulan */
void PrintObj(date D);

/* Print nilai D dengan format dd/mm/yyyy */
/****** Operator Relasional ******/
boolean isKabisat(date D);

/* Memeriksa apakah suatu tanggal adalah kabisat; Dipakai untuk
bulan == 2 saja */
/***** Predikat lain *******/
int TglAkhir(date D);
/* Memberikan tanggal terakhir dari sebuah bulan */

void DateBefore(date D);
/* Menampilkan tanggal sebelumnya dari sebuah Date
 I.S = Tanggal tertentu diketahui
 F.S = Tanggal sebelumnya diketahui
 Hal yang perlu diketahui : Batas akhir tiap bulan dan jika
jan, thn-1 */

void NextDate(date D);
/* Menampilkan tanggal berikutnya dari sebuah Date
 I.S = Tanggal tertentu diketahui
 F.S = Tanggal berikutnya diketahui
 Hal yang perlu diketahui : Batas akhir tiap bulan dan jika
des, thn+1 */

void SelisihDate(date D1, date D2);
/* Menampilkan selisih dua tanggal
 I.S = 2 buah Tanggal tertentu diketahui
 F.S = Tampil selisih dua buah tanggal
 Asumsi : 1 tahun = 365 hari */
#endif