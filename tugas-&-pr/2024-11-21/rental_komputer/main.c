/* Nama Program : main.c
 Deskripsi : Program Rental Komputer untuk mencatat dan mengelola data pemakaian komputer,
            meliputi pencatatan identitas pengguna, waktu pemakaian, jumlah kertas yang digunakan,
            dan perhitungan total biaya rental komputer.
 Pembuat : Ikhsan Satriadi / 241511080
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "rental.h"
#include "date.h"

#define FILENAME "data.dat" // Nama file data

// Prosedur untuk menulis data pengguna ke file
// namaFile: parameter input passing by value
// daftarPengguna: parameter array input passing by reference
// jumlahPengguna: parameter input passing by value
void tulisDataPengguna(const char *namaFile, Pengguna daftarPengguna[], int jumlahPengguna)
{
  printf("Menyimpan ke file %s...\n", namaFile);

  FILE *file = fopen(namaFile, "ab+"); // membuka file dalam mode append dan binary

  if (file == NULL)
  {
    printf("Error: Tidak dapat membuka file %s\n", namaFile);
  }

  // Tulis setiap data pengguna ke file
  for (int i = 0; i < jumlahPengguna; i++)
  {
    // Menulis data ke file
    fwrite(&daftarPengguna[i], sizeof(daftarPengguna[i]), 1, file);
  }

  // Tutup file
  fclose(file);

  printf("Data berhasil ditambahkan ke file %s\n", namaFile);
}

// Prosedur untuk memuat data pengguna dari file
// namaFile: parameter input passing by value
// daftarPengguna: parameter array output passing by reference
// i: counter pengguna parameter output passing by reference
void muatDataPengguna(char *namaFile, Pengguna daftarPengguna[], int *i)
{
  printf("Membaca file %s...\n", namaFile);

  FILE *file = fopen(namaFile, "rb"); // membuka file dalam mode read dan binary

  if (file == NULL)
  {
    printf("Error: Tidak dapat membuka file %s\n", namaFile);
  }

  // Baca baris per baris
  while (fread(&daftarPengguna[*i], sizeof(daftarPengguna[*i]), 1, file))
  {
    // increment counter pengguna
    *i = *i + 1;
  }

  fclose(file); // Tutup file
}

// Fungsi untuk mencari pengguna dengan pemakaian terlama
// daftarPengguna: parameter array input passing by reference
// jumlahPengguna: parameter input passing by value
// Mengembalikan pengguna dengan pemakaian terlama
Pengguna cariPenggunaTerlama(Pengguna daftarPengguna[], int jumlahPengguna)
{
  // Kamus data
  int i = 0;
  int terbesar = -1; // variabel sementara untuk menyimpan pemakaian terbesar
  Pengguna p;        // variabel Pengguna sementara dengan pemakaian terbesar

  printf("Mencari pengguna dengan pemakaian terlama...\n");
  while (i < jumlahPengguna)
  {
    if (daftarPengguna[i].JamR > terbesar)
    {
      terbesar = daftarPengguna[i].JamR;
      p = daftarPengguna[i];
    }
    i = i + 1;
  }
  return p;
}

// Fungsi untuk mencari pengguna dengan pemakaian tersingkat
// daftarPengguna: parameter array input passing by reference
// jumlahPengguna: parameter input passing by value
// Mengembalikan pengguna dengan pemakaian tersingkat
Pengguna cariPenggunaTersingkat(Pengguna daftarPengguna[], int jumlahPengguna)
{
  // Kamus data
  int i = 0;
  int terkecil = daftarPengguna[0].JamR + 1; // variabel sementara untuk menyimpan pemakaian terkecil
  Pengguna p;                                // variabel Pengguna sementara dengan pemakaian terkecil

  printf("Mencari pengguna dengan pemakaian tersingkat...\n");
  while (i < jumlahPengguna)
  {
    if (daftarPengguna[i].JamR < terkecil)
    {
      terkecil = daftarPengguna[i].JamR;
      p = daftarPengguna[i];
    }
    i = i + 1;
  }
  return p;
}

// Prosedur untuk menampilkan menu
void tampilkanMenu()
{
  printf("\n===================== RENTAL KOMPUTER =====================\n");
  printf("MENU\n");
  printf("1. Input Data Pengguna\n");
  printf("2. Cetak Laporan\n");
  printf("3. Cari Pengguna Terlama\n");
  printf("4. Cari Pengguna Tersingkat\n");
  printf("5. Keluar\n");
  printf("Pilih menu (1-5): ");
}

int main()
{
  // Kamus data
  int pilihan; // Pilihan menu

  do
  {
    tampilkanMenu();
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
      // variabel lokal untuk menyimpan daftar pengguna
      Pengguna daftarPengguna[MAX_PENGGUNA];
      int jumlahPengguna;

      printf("Masukkan Jumlah Pengguna Yang Ingin Diinput : ");
      scanf("%d", &jumlahPengguna);

      if (jumlahPengguna > MAX_PENGGUNA || jumlahPengguna < 1)
      {
        printf("Jumlah pengguna tidak valid. Silakan coba lagi.\n");
        continue;
      }

      inputDataPengguna(daftarPengguna, jumlahPengguna);           // Memasukkan data
      tulisDataPengguna(FILENAME, daftarPengguna, jumlahPengguna); // Tulis ke file

      printf("\nTekan enter untuk kembali ke menu...");
      getch();
      system("clear");
    }
    else if (pilihan == 2)
    {
      // variabel lokal untuk menyimpan daftar pengguna
      Pengguna daftarPengguna[MAX_PENGGUNA];
      int jumlahPengguna = 0; // variabel untuk menyimpan jumlah pengguna yang ada di file data

      muatDataPengguna(FILENAME, daftarPengguna, &jumlahPengguna); // Muat dari file
      cetakLaporanPengguna(daftarPengguna, jumlahPengguna);        // Cetak laporan pengguna ke layar

      printf("\nTekan enter untuk kembali ke menu...");
      getch();
      system("clear");
    }
    else if (pilihan == 3)
    {
      // variabel lokal untuk menyimpan daftar pengguna
      Pengguna daftarPengguna[MAX_PENGGUNA];
      Pengguna penggunaTerlama; // variabel untuk menyimpan pengguna terlama
      int jumlahPengguna = 0;   // variabel untuk menyimpan jumlah pengguna yang ada di file data

      muatDataPengguna(FILENAME, daftarPengguna, &jumlahPengguna);           // Muat dari file
      penggunaTerlama = cariPenggunaTerlama(daftarPengguna, jumlahPengguna); // Cari pengguna terlama
      cetakLaporanPengguna(&penggunaTerlama, 1);                             // Cetak pengguna ke layar
      printf("\nPengguna dengan pemakaian komputer terlama adalah : %s, dengan pemakaian %.2f jam \n", penggunaTerlama.Nama, penggunaTerlama.JamR);

      printf("\nTekan enter untuk kembali ke menu...");
      getch();
      system("clear");
    }
    else if (pilihan == 4)
    {
      // variabel lokal untuk menyimpan daftar pengguna
      Pengguna daftarPengguna[MAX_PENGGUNA];
      Pengguna penggunaTersingkat; // variabel untuk menyimpan pengguna tersingkat
      int jumlahPengguna = 0;      // variabel untuk menyimpan jumlah pengguna yang ada di file data

      muatDataPengguna(FILENAME, daftarPengguna, &jumlahPengguna);                 // Muat dari file
      penggunaTersingkat = cariPenggunaTersingkat(daftarPengguna, jumlahPengguna); // Cari pengguna tersingkat
      cetakLaporanPengguna(&penggunaTersingkat, 1);                                // Cetak pengguna ke layar
      printf("\nPengguna dengan pemakaian komputer tersingkat adalah : %s, dengan pemakaian %.2f jam \n", penggunaTersingkat.Nama, penggunaTersingkat.JamR);

      printf("\nTekan enter untuk kembali ke menu...");
      getch();
      system("clear");
    }
    else if (pilihan == 5)
    {
      system("clear");
      printf("Terima kasih. Program selesai.\n");
    }
    else
    {
      system("clear");
      printf("Pilihan tidak valid. Silakan coba lagi.\n");
    }
  } while (pilihan != 5);

  return 0;
}
