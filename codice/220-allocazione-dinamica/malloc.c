#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p; // indirizzo dell'area allocata;
  int *a;
  int i, n;
  p = (int *)malloc(sizeof(int));
  if (p == NULL) // malloc ha fallito
  {
    printf("Errore allocazione memoria\n");
    exit(1);
  }
  *p = 4;

  scanf("%d", &n);
  a = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    a[i] = i;

  return 0;
}