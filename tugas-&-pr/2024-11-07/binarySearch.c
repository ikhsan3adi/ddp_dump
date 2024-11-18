/* File	        : binarySearch.c */
/* Deskripsi	  : Tujuan mencari posisi elemen pertama di array menggunakan algoritma binary search */
/* Dibuat	Oleh  : Ikhsan Satriadi / 241511080	*/
/* Tanggal	    : 08-11-2024 */

#include <stdio.h>
#include <stdbool.h>

/* Tujuan mencari posisi elemen pertama di array a[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array a
  Dapat digunakan jika array A telah terurut
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter a, n dan k adalah parameter input sesuai type yang didefinisikan
  Array a adalah objek tempat mencari
  n adalah jumlah elemen pada array a
  k adalah kriteria searching */
int binarySearch(int *a, int n, int k)
{
  /* Kamus data */
  int awal, akhir, tengah;
  bool ketemu;

  /* Program */
  awal = 0;
  akhir = n - 1;

  if (k == a[awal]) // sama dengan batas atas
  {
    return awal;
  }
  else if (k == a[akhir]) // sama dengan batas bawah
  {
    return akhir;
  }
  else if (k < a[awal]) // diatas range
  {
    return n;
  }
  else if (k > a[akhir]) // dibawah range
  {
    return n;
  }
  else // dalam range
  {
    ketemu = false;
    tengah = (awal + akhir) / 2;
    while (awal < akhir && !ketemu)
    {
      tengah = (awal + akhir) / 2;
      if (k < a[tengah])
      {
        akhir = tengah - 1;
      }
      else if (k > a[tengah])
      {
        awal = tengah + 1;
      }
      else if (k == a[tengah])
      {
        ketemu = true;
      }
    }
    if (ketemu)
    {
      return tengah;
    }
    else
    {
      return n;
    }
  }
}

void main()
{
  /* Kamus data */
  int n, index;
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  /* Program */
  n = 10;
  index = binarySearch(A, n, 5); // pemanggilan fungsi

  /* Tamplikan posisi elemen pertama di array A yang bernilai k */
  printf("%d", index);
}