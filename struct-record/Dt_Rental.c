#include <stdio.h>

typedef struct
{
  char Nama[64];
  float JamR;
  int JumK;
  int TotB;
} Pengguna;

void main()
{
  Pengguna Dt_Rental[10];
  int N, i;

  N = 9;
  i = 0;
  while (i <= N)
  {
    printf("Nama : ");
    scanf("%s", &Dt_Rental[i].Nama);
    printf("Jam pemakaian rental : ");
    scanf("%f", &Dt_Rental[i].JamR);
    printf("Kertas yang dipakai (lembar) : ");
    scanf("%d", &Dt_Rental[i].JumK);

    Dt_Rental[i].TotB = (Dt_Rental[i].JamR * 3000) + (Dt_Rental[i].JumK * 250);
    if (Dt_Rental[i].TotB > 10000)
    {
      Dt_Rental[i].TotB = Dt_Rental[i].TotB - 1000;
    }
    i = i + 1;
  }

  printf("\n---LAPORAN RENTAL---\n");
  i = 0;
  while (i <= N)
  {
    printf("Nama : %s\n", Dt_Rental[i].Nama);
    printf("Lama pemakaian komputer :  %.1f jam\n", Dt_Rental[i].JamR);
    printf("Jumlah kertas yang di cetak : %d\n", Dt_Rental[i].JumK);
    printf("Jumlah pembayaran : Rp. %d\n\n", Dt_Rental[i].TotB);
    i = i + 1;
  }
}
