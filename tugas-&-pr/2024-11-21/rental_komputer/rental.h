/* Nama Program : rental.h
 Deskripsi : Deklarasi unit untuk keperluan rental komputer
 Pembuat : Ikhsan Satriadi / 241511080
*/

#ifndef RENTAL_H
#define RENTAL_H

#include <stdio.h>
#include "date.h"

// Deklarasi struktur Pengguna
typedef struct
{
  char Nama[32]; // Nama pengguna
  float JamR;    // Jam pemakaian komputer
  int JumK;      // Jumlah kertas yang dipakai
  int TotB;      // Total biaya yang harus dibayar
  date Tanggal;  // Tanggal pemakaian
} Pengguna;

#define MAX_PENGGUNA 1024 // Maksimum jumlah pengguna

// Prosedur untuk memasukkan data pengguna
// daftarPengguna: parameter array output passing by reference
// jumlahPengguna: parameter input passing by value
void inputDataPengguna(Pengguna *daftarPengguna, int jumlahPengguna);

// Prosedur untuk mencetak laporan pengguna
// daftarPengguna: parameter array data pengguna
// jumlahPengguna: parameter input passing by value
void cetakLaporanPengguna(Pengguna *daftarPengguna, int jumlahPengguna);

#endif // RENTAL_H