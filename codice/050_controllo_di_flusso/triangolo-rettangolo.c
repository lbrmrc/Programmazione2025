#include <stdio.h>

int main() {
  int a, b, c; // lati
  printf("Inserisci le lunghezze dei lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a * a + b * b == c * c)
    printf("Rettangolo\n");
  else
    printf("Non rettangolo\n");
}