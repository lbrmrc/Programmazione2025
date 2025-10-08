#include <stdio.h>

int main() {
  int a, b, c; // lati
  printf("Inserisci le lunghezze dei lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a == b)
    if (a == c)
      printf("Equilatero\n");
    else
      printf("Isoscele\n");
  else if (a == c)
    printf("Isoscele\n");
  else if (b == c)
    printf("Isoscele");
  else
    printf("Scaleno\n");
}