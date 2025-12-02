#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int main(int argc, char *argv[]) {
  int m[DIM][DIM];
  int i, j;
  int dl = 1343241245;

  if (argc != 2) {
    printf("Uso: %s numero_righe_colonne\n", argv[0]);
    exit(1);
  }

  // scanf("%d", &dl);
  // fscanf(pf, "%d", &dl);

  // argv[1] --> "20"
  if (sscanf(argv[1], "%d", &dl) != 1) {
    printf("L'argomento deve essere un intero positivo\n");
    exit(2);
  }

  //   int m[dl][dl]; // non standard C89

  for (i = 0; i < dl; i++)
    for (j = 0; j < dl; j++)
      m[i][j] = i == j;

  for (i = 0; i < dl; i++) {
    for (j = 0; j < dl; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}