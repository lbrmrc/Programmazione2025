#include <stdio.h>
#define DIM 20

int main() {
  int m[DIM][DIM];
  int i, j;

  for (i = 0; i < DIM; i++)
    for (j = 0; j < DIM; j++)
      m[i][j] = i == j;

  for (i = 0; i < DIM; i++) {
    for (j = 0; j < DIM; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}