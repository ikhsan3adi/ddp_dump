#ifndef RENTAL_H
#define RENTAL_H

// Deklarasi struktur Pengguna
typedef struct
{
  char Nama[64]; // Nama pengguna
  float JamR;    // Jam pemakaian komputer
  int JumK;      // Jumlah kertas yang dipakai
  int TotB;      // Total biaya yang harus dibayar
} Pengguna;

#endif // RENTAL_H