#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM] = {4, -2, 3, 0, 1}, b[DIM], i, dl;

  dl = 0;
  for (i = 0; i < DIM; i++)
    if (a[i] > 0) {
      b[dl] = a[i];
      dl++;
    }

  for (i = 0; i < dl; i++) // stampa 4 3 1
    printf("%d\n", b[i]);
}