#include <stdio.h>

#define INIZIO 1900
#define FINE 2100

int bisestile(int anno) {
  return anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0;
}

int main() {
  int a[FINE - INIZIO + 1], b[FINE - INIZIO  + 1];
  int i, dl;
  for (i = 0; i <= FINE - INIZIO; i++)
    a[i] = INIZIO + i;
  dl = 0;
  for (i = 0; i <= FINE - INIZIO; i++)
    if (bisestile(a[i])) {
      b[dl] = a[i];
      dl++;
    }
  for (i = 0; i < dl; i++)
    printf("%d ", b[i]);
  printf("\n");
}