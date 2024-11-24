/* Nama Program : Rentalkomputer.c
 Deskripsi : Rental komputer
 Pembuat : Ikhsan Satriadi / 241511080
*/

#include <stdio.h>

typedef struct
{
  char Nama[64];
  float JamR;
  int JumK;
  int TotB;
} Pengguna;

// Cari pengguna yang paling lama memakai komputer
char cariPalingLama(Pengguna *p)
{
  int i, N, terbesar;
  char *nama;

  terbesar = 0;
  i = 0;
  N = 2;
  while (i <= N)
  {
    if (p[i].JamR > terbesar)
    {
      terbesar = p[i].JamR;
      nama = p[i].Nama;
    }
    i = i + 1;
  }
  return nama;
}

// prosedur untuk menghitung total bayar
// TotB parameter output passing by address
// JamR, JumK: parameter input passing by value
void hitungTotB(int *TotB, int JamR, int JumK)
{
  *TotB = (JamR * 3000) + (JumK * 250);
  if (*TotB > 10000)
  {
    *TotB = *TotB - 1000;
  }
}

// fungsi untuk menginput pengguna
// mengembalikan Pengguna
Pengguna inputDataPengguna()
{
  Pengguna user;

  printf("Nama : ");
  scanf("%s", &user.Nama);
  printf("Jam pemakaian rental : ");
  scanf("%f", &user.JamR);
  printf("Kertas yang dipakai (lembar) : ");
  scanf("%d", &user.JumK);

  hitungTotB(&user.TotB, user.JamR, user.JumK);

  return user;
}

// prosedur untuk mencetak pengguna
// pengguna: parameter input passing by value
void cetak(Pengguna pengguna)
{
  printf("Nama : %s\n", pengguna.Nama);
  printf("Lama pemakaian komputer :  %.1f jam\n", pengguna.JamR);
  printf("Jumlah kertas yang di cetak : %d\n", pengguna.JumK);
  printf("Jumlah pembayaran : Rp. %d\n\n", pengguna.TotB);
}

void main()
{
  Pengguna Dt_Rental[10];
  int N, i;

  N = 10;
  i = 0;
  while (i < N)
  {
    Dt_Rental[i] = inputDataPengguna();
    i = i + 1;
  }

  printf("\n---LAPORAN RENTAL---\n");
  i = 0;
  while (i <= N)
  {
    cetak(Dt_Rental[i]);
    i = i + 1;
  }
}
