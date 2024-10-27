# CONTOH PROGRAM KECIL dalam BAHASA C untuk Praktikum MK DDP

Pada semua program, tulis `#include <stdio.h>` sebelum `int main()` atau `void main()`
Semua program di-save dengan nama file berekstensi .cpp

PERHATIKAN OPERATOR BOOLEAN DIBANDINGKAN OPERATOR BIT JIKA DIPAKAI DALAM
EKSPRESI KONDISIONAL :  

```cpp
/* KAMUS */  
char i, j;  
i = 3; j = 4;

/* Program */
if (i && j) { ....... } /* true = true and true (LOGIKA) */ if (i & j) { ....... } /* false = 00000000 (BIT) */
if (i || j) { ....... } /* true = true and true (LOGIKA) */ if (i | j) { ....... } /* true = 00000111 (BIT) */
if (i ^ j) { ....... } /* true = 00000111 (BIT) */
if (-i) { ....... } /* true = 11111000 (BIT) */
```
