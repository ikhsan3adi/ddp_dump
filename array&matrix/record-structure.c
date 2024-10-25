#include <stdio.h>

typedef struct
{
  char NIM[16];
  char Nama[64];
  int Umur;
} Mahasiswa;

void main()
{
  Mahasiswa mahasiswa1 = {
    NIM : "99999999",
    Nama : "Ikhsan Satriadi",
    Umur : 19,
  };

  printf("Nama: %s\n", mahasiswa1.Nama);
  printf("NIM: %s\n", mahasiswa1.NIM);
  printf("Umur: %d\n", mahasiswa1.Umur);
}