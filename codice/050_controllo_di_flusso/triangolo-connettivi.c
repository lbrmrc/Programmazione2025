#include <stdio.h>

int main() {
  int a, b, c; // lati
  printf("Inserisci le lunghezze dei lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a == b && a == c)
    printf("Equilatero\n");
  else if (a == b || a == c || b == c)
    printf("Isoscele\n");
  else
    printf("Scaleno\n");
}