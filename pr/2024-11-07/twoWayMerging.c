/* File	        : twoWayMerging.c */
/* Deskripsi	  : Tujuan menggabungkan dua buah array dan mengurutkan elemen-nya secara ascending */
/* Dibuat	Oleh  : Ikhsan Satriadi / 241511080	*/
/* Tanggal	    : 15-11-2024 */
#include <stdio.h>

/* Menyalin elemen-elemen dari array sumber ke array tujuan mulai dari indeks tertentu
   Parameter:
   {Asal   : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    j      : parameter input bertype integer dengan passing parameter by value;
    n      : parameter input bertype integer dengan passing parameter by value;
    Tujuan : parameter output bertype pointer to integer (array) dengan passing parameter by address;
    k      : parameter input/output bertype pointer to integer dengan passing parameter by address;
    i      : variabel lokal bertype integer}
*/
void copy(int *Asal, int j, int n, int *Tujuan, int *k)
{
  /* Kamus data */
  int i; // index untuk array Asal yang akan dicopykan ke array Tujuan

  /* Program: meng-copy semua isi array Asal ke array Tujuan */
  for (i = j; i < n; i++)
  {
    Tujuan[*k] = Asal[i];
    *k = *k + 1;
  }
}

/* Melakukan penggabungan (merging) sebagian elemen dari dua array terurut
  sampai array pertama habis
  Parameter:
   {A : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    B : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    C : parameter output bertype pointer to integer (array) dengan passing parameter by address;
    m : parameter input bertype integer dengan passing parameter by value;
    j : parameter input bertype integer dengan passing parameter by value;
    k : parameter input/output bertype pointer to integer dengan passing parameter by address;
    i : variabel lokal bertype integer}
*/
void shortMerge(int *A, int *B, int *C, int m, int j, int *k)
{
  /* Kamus data */
  int i; // index dari array hasil merge

  /* Program: merge semua isi array A dan B */
  i = 0;

  while (i < m)
  {
    if (A[i] < B[j])
    {
      C[*k] = A[i];
      i = i + 1;
    }
    else
    {
      C[*k] = B[j];
      j = j + 1;
    }
    *k = *k + 1;
  }
}

/* Menggabungkan dua array terurut dengan mempertimbangkan elemen terakhir array pertama
  terhadap elemen pertama array kedua untuk menentukan metode penggabungan
  Parameter:
   {A : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    B : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    C : parameter output bertype pointer to integer (array) dengan passing parameter by address;
    m : parameter input bertype integer dengan passing parameter by value;
    n : parameter input bertype integer dengan passing parameter by value;
    i : variabel lokal bertype integer;
    j : variabel lokal bertype integer;
    k : variabel lokal bertype integer}
*/
void mergeCopy(int *A, int *B, int *C, int m, int n)
{
  /* Kamus data */
  int i; // posisi awal array A
  int j; // posisi current di array B
  int k; // posisi current di array C yang menjadi tujuan merge

  /* Program */
  i = 0;
  j = 0;
  k = 0;
  if (A[m] < B[i])
  {
    copy(A, i, m, C, &k);
    copy(B, j, n, C, &k);
  }
  else
  {
    // merge semua elemen A kemudian sisa elemen array B
    shortMerge(A, B, C, m, j, &k);
    copy(B, j, n, C, &k);
  }
}

/* Prosedur utama untuk menggabungkan dua array terurut menjadi satu array terurut,
  dengan menentukan array mana yang menjadi basis penggabungan berdasarkan
  perbandingan elemen terakhir kedua array
  Parameter:
   {A : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    B : parameter input bertype pointer to integer (array) dengan passing parameter by address;
    C : parameter output bertype pointer to integer (array) dengan passing parameter by address;
    m : parameter input bertype integer dengan passing parameter by value;
    n : parameter input bertype integer dengan passing parameter by value}
*/
void merge(int *A, int *B, int *C, int m, int n)
{
  if (A[m] < B[n])
  {
    mergeCopy(A, B, C, m, n);
  }
  else
  {
    mergeCopy(B, A, C, n, m);
  }
}

void main()
{
  int A[] = {11, 13, 16};
  int B[] = {12, 14, 18};
  int m = sizeof(A) / sizeof(A[0]); // Ukuran array A
  int n = sizeof(B) / sizeof(B[0]); // Ukuran array B
  int C[m + n];                     // Array hasil merge

  merge(A, B, C, m, n); // Pemanggilan prosedur

  // Cetak array C
  for (int i = 0; i < m + n; i++)
  {
    printf("%d ", C[i]);
  }
}