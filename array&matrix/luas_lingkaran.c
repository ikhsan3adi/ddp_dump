#include <stdio.h>

void main()
{
  const float pi = 3.1415;
  float r;

  printf("Masukkan jari-jari lingkaran: ");
  scanf("%f", &r);
  printf("Luas lingkaran: %f\n", pi * r * r);
}
