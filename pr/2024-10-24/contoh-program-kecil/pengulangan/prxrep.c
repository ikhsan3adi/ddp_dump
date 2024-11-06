/* File	: prxrep.c */
/* Deskripsi	: REPEAT dengan pake penanganan kasus kosong */
/* Dibuat Oleh : Dosen DDP / 132 231 592	*/
/* Tanggal	: 06-09-2001*/
#include <stdio.h>

int main()
{
  /* Kamus */
  int sum, x;

  /* Program */
  printf("Masukkan nilai x (int), akhiri dengan 999 = ");
  /* Inisialisasi */
  scanf("%d", &x);
  if (x == 999)
  {
    printf("Kasus Kosong \n");
  }
  else
  {          /* Minimal ada satu data yang dijumlahkan */
    sum = 0; /* Inisialisasi; invarian !! */
    do
    {
      sum = sum + x; /* proses */
      printf("Masukkan nilai x (int), akhiri dengan 999 : ");
      scanf("%d", &x); /* Next elemen */
    } while (x != 999); /* Kondisi pengulangan */
    printf("Hasil penjumlahan = %d \n", sum); /* Terminasi */
  }
  return 0;
}
