#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM] = {4, -2, 3, 0, 1}, b[DIM], i, j = 0;

  for (i = 0; i < DIM; i++)
    if (a[i] > 0)
      b[i] = a[i];

  for (i = 0; i < DIM; i++) // dovrebbe stampare 4 3 1
      printf("%d\n", b[i]);
}