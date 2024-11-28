/* Nama Program : rental.c
 Deskripsi : Unit untuk keperluan rental komputer
 Pembuat : Ikhsan Satriadi / 241511080
*/

#include <string.h>

#include "rental.h"

// Prosedur untuk memasukkan data pengguna
// daftarPengguna: parameter array output passing by reference
// jumlahPengguna: parameter input passing by value
void inputDataPengguna(Pengguna daftarPengguna[MAX_PENGGUNA], int jumlahPengguna)
{
  // Kamus data
  int i = 0; // counter

  while (i < jumlahPengguna)
  {
    printf("Input Data Pengguna %d\n", i + 1);
    printf("Nama : ");
    // Bersihkan buffer input sebelumnya
    while ((getchar()) != '\n')
      ;
    fgets(daftarPengguna[i].Nama, sizeof(daftarPengguna[i].Nama), stdin);

    // Hapus newline dari nama
    daftarPengguna[i].Nama[strcspn(daftarPengguna[i].Nama, "\n")] = 0;

    printf("Jam pemakaian rental : ");
    scanf("%f", &(daftarPengguna[i].JamR));

    printf("Kertas yang dipakai (lembar) : ");
    scanf("%d", &(daftarPengguna[i].JumK));

    // Menghitung total bayar
    daftarPengguna[i].TotB = (daftarPengguna[i].JamR * 3000) + (daftarPengguna[i].JumK * 250);
    if (daftarPengguna[i].TotB > 10000)
    {
      daftarPengguna[i].TotB = daftarPengguna[i].TotB - 1000;
    }

    // Beri tanggal sekarang
    daftarPengguna[i].Tanggal = TanggalSekarang();

    i = i + 1;
  }
}

// Prosedur untuk mencetak laporan pengguna
// daftarPengguna: parameter array data pengguna
// jumlahPengguna: parameter input passing by value
void cetakLaporanPengguna(Pengguna daftarPengguna[MAX_PENGGUNA], int jumlahPengguna)
{
  // Kamus data
  int i = 0;

  printf("=========================================================================================================================\n");
  printf("No.\tNama\t\t\tLama Pemakaian Komputer\t\tJumlah Kertas\t\tTotal Bayar\t\tTanggal\n");
  printf("=========================================================================================================================\n");

  while (i < jumlahPengguna)
  {
    printf("%d\t", i + 1);
    printf("%-24s", daftarPengguna[i].Nama);
    printf("%.2f Jam\t\t\t", daftarPengguna[i].JamR);
    printf("%d\t\t\t", daftarPengguna[i].JumK);
    printf("Rp %d \t\t", daftarPengguna[i].TotB);
    printf("%d/%d/%d\n", daftarPengguna[i].Tanggal.Tgl, daftarPengguna[i].Tanggal.Bln, daftarPengguna[i].Tanggal.Thn);
    i = i + 1;
  }
}
