#include <stdio.h>
#define DIM 100

int leggi_valori(int a[]) {
  int i;
  i = 0;
  do {
    scanf("%d", &a[i]);
    if (a[i] < 0)
      break;
    i++;
  } while (i < DIM);
  return i;
}

int main() {
  int a[DIM], dl;
  dl = leggi_valori(a);
}