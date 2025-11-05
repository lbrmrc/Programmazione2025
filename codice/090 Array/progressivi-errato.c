#include <stdio.h>

#define DIM 5

int main() {
  int a[DIM];
  int i;
  int n; // richiesto all'utente
  scanf("%d", &n);
  for (i = n + 1; i <= n + DIM; i++) {
    // i prende i valori 0, 1, 2, ..., DIM - 1
    // n + i + 1 prende i valori n + 1, n + 2, n + 3, ..., n + DIM - 1 + 1
    a[i] = i;
  }
  // a contiene i valori [n+1, n+2, n+3, n+4, n+5]
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);
}