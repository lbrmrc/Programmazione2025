#include <stdio.h>

int main() {
  int a, s;

  s = 0;
  printf("Inserisci tre numeri interi\n");
  scanf("%d", &a);
  s += a;
  scanf("%d", &a);
  s += a;
  scanf("%d", &a);
  s += a;
  // stampa di a + b + c
  printf("La somma è %d\n", s);
}