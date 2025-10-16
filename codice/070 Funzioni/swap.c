#include <stdio.h>

void swap(int x, int y) {
  int t;
  t = x;
  x = y;
  y = t;
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b); // utente scrive 2 3
  swap(a, b);
  printf("%d %d\n", a, b); // stampa 3 2
}