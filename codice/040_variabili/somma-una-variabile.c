#include <stdio.h>

int main() {
  int a;

  printf("Inserisci tre numeri interi\n");
  scanf("%d", &a);
  scanf("%d", &a);
  scanf("%d", &a);
  printf("La somma è %d\n", a + a + a);
}