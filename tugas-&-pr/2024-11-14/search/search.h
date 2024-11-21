/* Nama Program : search.h
 Deskripsi : Deklarasi unit untuk keperluan search
 Pembuat : Ikhsan Satriadi */

#ifndef search_h
#define search_h

/* Tujuan mencari posisi elemen pertama di array A[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array A
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter A, n dan k adalah parameter input sesuai type yang didefinisikan
  Array A adalah objek tempat mencari
  n adalah jumlah elemen pada array A
  k adalah kriteria searching */
int linSearch(int *A, int n, int k);

/* Tujuan mencari posisi elemen pertama di array a[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array a
  Dapat digunakan jika array A telah terurut
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter a, n dan k adalah parameter input sesuai type yang didefinisikan
  Array a adalah objek tempat mencari
  n adalah jumlah elemen pada array a
  k adalah kriteria searching */
int binarySearch(int *a, int n, int k);

/* Tujuan mencari posisi elemen pertama di array A[0..n-1] yang bernilai = k
  Nilai yang dikembalikan adalah posisi elemen di array A
  Jika tidak ditemukan, maka nilai kembalian = n
  Parameter A, n dan k adalah parameter input sesuai type yang didefinisikan
  Array A adalah objek tempat mencari
  n adalah jumlah elemen pada array A
  k adalah kriteria searching */
int sentinelSearch(int *A, int n, int k);

#endif