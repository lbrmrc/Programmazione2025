#include <stdio.h>
#define DIM 5

int main() {
  int a[] = {4, 3, 8, 5, 1};
  int trovato = 0, i, valore;

  scanf("%d", &valore);
  i = 0;
  while (!trovato && i < DIM)
    if (a[i] == valore)
      trovato = 1;
    else
      i++;
  if (trovato)
    printf("Elemento trovato all'indice %d\n", i);
  return 0;
}